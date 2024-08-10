/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:21:58 by marodrig          #+#    #+#             */
/*   Updated: 2024/08/10 10:37:54 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
}
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		i += ft_putchar(str[i]);
	return (i);//???????????
}
int	ft_putptr(unsigned long ptr)
{
	;
}
int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
