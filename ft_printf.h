#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *, ...);

int	ft_isvalidparam(char c);
int	ft_c_char(const char *template, int c);
#endif
