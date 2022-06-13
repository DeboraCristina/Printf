#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *, ...);

int	ft_isvalidparam(char c);
int	ft_print_char(int c);
int	ft_print_hex(int placeholder, int i);
int	ft_print_ptr(unsigned int i);
int	ft_print_int(int i);
int	ft_print_unint(unsigned int u);
int	ft_print_str(char *s);

#endif
