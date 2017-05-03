NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
		ft_error.c \
		ft_get_arg_type.c \
		ft_get_flags.c \
		ft_get_width_min.c \
		ft_print_format_id.c \
		ft_print_all_format_id.c \
		ft_print_arg_s.c \
		ft_get_precision.c \
		ft_get_parameter.c \
		ft_get_args.c \
		ft_print_all.c \
		ft_format_id_init.c
		# ft_print_arg_p.c \
		# ft_print_arg_d.c \
		# ft_print_arg_o.c \
		# ft_print_arg_u.c \
		# ft_print_arg_x.c \
		# ft_print_arg_c.c

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
