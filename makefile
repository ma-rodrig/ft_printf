NAME = libftprintf.a
INCLUDE = ft_printf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_print1.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re