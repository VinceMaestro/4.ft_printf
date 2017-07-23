NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
		ft_error.c \
		ft_init_format_id.c \
		ft_init_a_lst.c \
		ft_mk_all_f_id.c \
		ft_get_all_infos.c \
		ft_get_parameter.c \
		ft_get_flags.c \
		ft_get_width_min.c \
		ft_get_precision.c \
		ft_get_lenght.c \
		ft_get_arg_type.c \
		ft_mk_all_a_lst.c \
		ft_get_a_from_lst.c \
		ft_new_a_lst_elem.c \
		ft_p_x_char.c \
		ft_p_f_id.c \
		dbug_p_f_id.c \
		dbug_p_all_f_id.c \
		ft_p_all_f_id.c \
		ft_print_arg_s.c \
		ft_print_arg_i.c \
		ft_print_arg_x.c \
		ft_print_arg_null.c \
		ft_updt_all_precision.c
		# ft_print_arg_p.c \
		# ft_print_arg_o.c \
		# ft_print_arg_u.c \
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
