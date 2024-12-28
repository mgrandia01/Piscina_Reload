NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

INC = ./includes

SRC = srcs/ft_putchar.c \
      srcs/ft_putstr.c \
      srcs/ft_strcmp.c \
      srcs/ft_strlen.c \
      srcs/ft_swap.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -I $(INC) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
