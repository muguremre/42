NAME = libftprintf.a

SRCS = ft_printf.c ft_numbers.c ft_words.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all

.PHONY: all clean fclean re
