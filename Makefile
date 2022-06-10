SRCS		=	ft_printf.c			src/ft_printf_utils.c	\
				src/ft_print_char.c	src/ft_print_hex.c		\
				src/ft_print_int.c	src/ft_print_str.c		\
				# src/ft_print_u_int.c

OBJS		=	$(SRCS:%.c=%.o)

NAME		=	libftprintf.a

COMPILE		=	cc

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

%.c%.o:
	@$(CC) $(FLAGS) -co $@

$(NAME):	$(OBJS)
	@ar -rc $(NAME) $(OBJS)

all:	$(NAME)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean	all

.PHONY:	all	clean	fclean	re
.SILENT:	$(OBJS)
