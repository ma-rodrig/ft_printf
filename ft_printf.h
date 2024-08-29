/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:14:02 by marodrig          #+#    #+#             */
/*   Updated: 2024/08/29 14:14:19 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
#ifndef DECIMAL
# define DECIMAL "0123456789"
#endif
#ifndef HEXA
# define HEXA "0123456789abcdef"
#endif
#ifndef HEXA2
# define HEXA2 "0123456789ABCDEF"
#endif


int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long int ptr);
int	ft_putnbr(int nbr);
int	ft_putunsigned(unsigned int num);
int	ft_puthex(unsigned long int h, const char type);

#endif