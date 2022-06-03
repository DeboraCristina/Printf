SRCS	=	ft_atoi.c		ft_bzero.c		ft_calloc.c		\
			ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
			ft_isdigit.c	ft_isprint.c	ft_memchr.c		\
			ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
			ft_memset.c		ft_strchr.c		ft_split.c		\
			ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	\
			ft_strlen.c		ft_strncmp.c	ft_strnstr.c	\
			ft_strrchr.c	ft_tolower.c	ft_toupper.c	\
			ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
			ft_putstr_fd.c	ft_substr.c	ft_strjoin.c		\
			ft_strtrim.c	ft_itoa.c	ft_strmapi.c		\
			ft_striteri.c

SRCS_B	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

OBJS	=	$(SRCS:%.c=%.o)

OBJS_B	=	$(SRCS_B:%.c=%.o)

NAME	=	libft.a

NAME_B	=	libft_bonus.a

HEADER	=	libft.h

CC		=	cc

FLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

%.c%.o:
	@@(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
	@ar -rc $(NAME) $(OBJS)
	@echo "\033[1;92mLib		successfully created\033[0m"

$(NAME_B):	$(OBJS) $(OBJS_B) $(HEADER)
	@ar -rc $(NAME) $(OBJS) $(OBJS_B)
	@echo "\033[1;92mLib with bonus		successfully created\033[0m"

all:	$(NAME)

bonus:	$(NAME_B)

clean:
	@$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	@$(RM) $(NAME) $(NAME_B)
	@echo "\33[1;93mlibft  successfully removed\33[0m"

re:	fclean all

re_b:	fclean bonus

.PHONY: all clean fclean re bonus
