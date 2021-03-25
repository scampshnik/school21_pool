
SRCS	= srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putchar.c

INCLDS	= includes/

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

LIBC	= ar rsc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLDS}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o 
