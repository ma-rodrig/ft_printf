NAME		= libftprintf
INCLUDE		= ft_printf.h
CC			= cc
CFLAGS		= -Wall -Werror -Wextra

SRCS = ft_printf.c ft_print1.c ft_print2.c main.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) 
			@cc -g $(OBJS) -o $(NAME)



clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
