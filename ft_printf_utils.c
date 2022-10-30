/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:00:22 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/30 22:40:08 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_strlen(char *s)
{
	int i = -1;
	while (s[++i]);
	return(i);
}

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}

void	ft_puthex(long int n, char frm)
{
	long int	nb;
	char		*hex;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		if (frm == 'x')
			hex = "0123456789abcdef";
		else if(frm == 'X')
			hex = "0123456789ABCDEF";
		ft_puthex(nb / 16, frm);
		ft_putchar(hex[nb % 16]);
	}
}

