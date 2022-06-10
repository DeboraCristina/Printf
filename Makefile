SRCS		=	ft_printf.c			src/ft_printf_utils.c	\
				src/ft_print_char.c	src/ft_print_hex.c		\
				src/ft_print_int.c	src/ft_print_str.c		\
				# src/ft_print_u_int.c

OBJS		=	$(SRCS:%.c=%.o)

NAME		=	libftprintf.a

L_PATH		=	Libft/

L_NAME		=	libft.a

COMPILE		=	cc

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

%.c%.o:
	@$(COMPILE) $(FLAGS) -co $@

all:	$(NAME)

$(L_NAME):
	@ make -C $(L_PATH)

$(NAME): $(L_NAME)	$(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "Printf criado com sucesso!"

clean:
	@$(RM) $(OBJS)
	@ make clean -C $(L_PATH)

fclean:	clean
	@$(RM) $(NAME)
	@ make fclean -C $(L_PATH)
	@echo "Printf removido por completo"

re:	fclean	all

.PHONY:	all	clean	fclean	re

.SILENT:	$(OBJS)	$(L_NAME)	clean	fclean
