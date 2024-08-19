/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:03:29 by marodrig          #+#    #+#             */
/*   Updated: 2024/08/19 22:33:06 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char type, int p)
{
	if (type == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(arg, unsigned long)));
	else if  (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(arg, int)));/*
	else if (type == 'u')
		/*return (ft_putunsigned(va_arg(arg, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), type));*/
	else if (type == '%')
		return(ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		p;

	i = 0;
	p = 0;
	va_start(arg, str);
	if (!str)
		return (write(1, "NULL", 1));
	while (str[i])
	{
		if (str[i] != '%')
			p += ft_putchar(str[i]);
		else
		{
			p = ft_type(arg, str[i + 1], p);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (p);
}
/*int	main(void)
{
	/*ft_printf("%%\n");
	printf("%%\n");*/
	/*ft_printf("%s\n", "1234");
	printf("%s\n", "1234");*/
	/*ft_printf("%i\n", -214748364222000);
	printf("%i\n", -214748364222000);*/

	/*char	n = 'b';
	char	*ptr = &n;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
}