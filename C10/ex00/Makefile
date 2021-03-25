
SRCS	= ft_putstr.c ft_error.c main.c

OBJS	= ft_putstr.o ft_error.o main.o

NAME	= ft_display_file

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

CF		= -o

RM		= rm -f

all:			
			${CC} ${CFLAGS} -c ${SRCS}
			${CC} ${CF} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
