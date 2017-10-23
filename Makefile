NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
		ft_init_f_id.c \
		ft_init_a_lst.c \
		ft_init_p_inf.c \
		ft_mk_all_f_id.c \
		ft_mk_new_f_id.c \
		ft_get_param.c \
		ft_get_flags.c \
		ft_get_w_min.c \
		ft_get_prec.c \
		ft_get_lenght.c \
		ft_get_a_tp.c \
		ft_mk_all_a_lst.c \
		ft_save_a_ll.c \
		ft_save_a_s.c \
		ft_save_a_p.c \
		ft_mk_new_a_lst.c \
		ft_print_arg.c \
		ft_print_all.c \
		ft_print_a_s.c \
		ft_print_a_i.c \
		ft_print_a_x.c \
		ft_print_a_u.c \
		ft_print_a_null.c \
		ft_updt_all_prec.c \
		ft_print_a_o.c \
		ft_print_a_c.c \
		ft_print_a_p.c \
		dbug_infos.c \
		dbug_p_f_id.c \
		dbug_p_all_f_id.c \
		dbug_a_lst.c \
		ft_free_all.c \
		ft_seek_err.c

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
	cp $(LIBDIR)/libft.a $(NAME)
	ar -rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	make -C $(LIBDIR) clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(LIBDIR)/libft.a

re: fclean all
