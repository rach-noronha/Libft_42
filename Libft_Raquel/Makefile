NAME	= libft.a
SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strncmp.c \
		  ft_strchr.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_strrchr.c \
		  ft_memset.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_memmove.c \
		  ft_strdup.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_strjoin.c \
		  ft_substr.c \
		  ft_itoa.c \
		  ft_striteri.c \
		  ft_strmapi.c \
		  ft_strtrim.c \
		  ft_split.c

BONUS_SRCS	= ft_lstlast.c \
			  ft_lstsize.c \
			  ft_lstiter.c \
			  ft_lstnew.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstadd_front.c \
			  ft_lstadd_back.c \
			  ft_lstmap.c

INC	= -I libft.h

OBJS	= ${SRCS:.c=.o}
BONUS_OBJS	=${BONUS_SRCS:.c=.o}

CC	= cc -c
CFLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}
	ar -t ${NAME}

${OBJS}:
	${CC} ${CFLAGS} ${@:.o=.c} ${INC}

${BONUS_OBJS}:
	${CC} ${CFLAGS} ${@:.o=.c} ${INC}
	ar -rcs ${NAME} $@

bonus: ${BONUS_OBJS} all

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus

