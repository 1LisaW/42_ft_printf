NAME = libftprintf.a
CC = cc
AR = ar -rcs
RM =  rm -f
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf
SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

all	:	${NAME}

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

$(OBJS) : %.o: %.c

$(NAME):	$(OBJS)
	${AR} $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all	clean fclean re
