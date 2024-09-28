NAME		= libftprintf.a
INCLUDE		= ft_printf.h
CC			= cc
CFLAGS		= -Wall -Werror -Wextra

SRCS = ft_printf.c ft_print1.c ft_print2.c 

OBJS	= $(SRCS:.c=.o)


$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all