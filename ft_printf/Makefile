CFLAGS := -Wall -Werror -Wextra
CC := cc $(CFLAGS)

SOURCES = src/ft_printf.c src/ft_print_args.c src/ft_print_args2.c \
			src/ft_printf_utils.c libft/ft_putchar_fd.c \
			libft/ft_putstr_fd.c libft/ft_strlcpy.c libft/ft_strlen.c \
			libft/ft_strdup.c
OBJECTS = $(SOURCES:.c=.o)

LIB_NAME = libftprintf.a

all:$(LIB_NAME)

$(LIB_NAME): $(OBJECTS)
	ar rcs $(LIB_NAME) $^
	ranlib $(LIB_NAME)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(LIB_NAME)
re: fclean all

.PHONY: all clean fclean re