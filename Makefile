NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
	printf_format_s.c \
	printf_format_p.c \
	printf_format_d.c \
	printf_format_o.c \
	printf_format_u.c \
	printf_format_x.c \
	printf_format_c.c \
	printf_format_percent.c

LIBDIR = ./libft

OBJ = $(SRC:.c=.o)

INCL = $(LIBDIR) \
		./

all: $(NAME)

$(LIBDIR)/libft.a:
	make -C $(LIBDIR)

%.o:%.c
	gcc $(CFLAGS) -c $< -o $@ -g $(addprefix -I, $(INCL))

$(NAME): $(OBJ) | $(LIBDIR)/libft.a
	ar -rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	make -C $(LIBDIR) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBDIR) fclean

re: fclean all
