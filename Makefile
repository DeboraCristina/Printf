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

%.o:	%.c
	@$(COMPILE) $(FLAGS) -c $< -o $(<:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@ make -C $(L_PATH)
	@mv $(L_PATH)/$(L_NAME) $@
	@ar -rc $(NAME) $(OBJS)
	@echo "\033[1;92mLibftPrintf		successfully created\033[0m"

clean:
	@$(RM) $(OBJS)
	@ make clean -C $(L_PATH)

fclean:	clean
	@$(RM) $(NAME)
	@ make fclean -C $(L_PATH)
	@echo "\33[1;93mLibftPrintf	successfully removed\33[0m"

re:	fclean	all

.PHONY:	all	clean	fclean	re
