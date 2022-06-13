/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:32:02 by desilva           #+#    #+#             */
/*   Updated: 2022/06/13 18:34:13 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *template, ...);

// utils
int	ft_isvalidparam(char c);
int	ft_print_char(int c);
int	ft_print_hex(int placeholder, int i);
int	ft_print_ptr(unsigned long int i);
int	ft_print_int(int i);
int	ft_print_unint(unsigned int u);
int	ft_print_str(char *s);

#endif
