/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:14:46 by faksouss          #+#    #+#             */
/*   Updated: 2022/11/01 02:19:04 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_put_add(void *p)
{
	unsigned long	r;
	int				j;

	j = 2;
	write(1, "0x", 2);
	if (!p)
	{
		j += write(1, "0", 1);
		return (j);
	}
	r = (unsigned long)p;
	j += ft_prnt_hex(r, 'x');
	return (j);
}

int	ft_prnt_hex(unsigned long n, char frm)
{
	int				j;
	unsigned long	nb;

	nb = n;
	j = tol(n, 16);
	ft_puthex(nb, frm);
	return (j);
}

int	ft_putun(unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	nb = n;
	return (tol(nb, 10));
}

int	ft_putstr(char *s)
{
	if (s)
		return (write(1, s, ft_strlen(s)));
	else
		return (write(1, "(null)", 6));
}

void	ft_puthex(unsigned long n, char frm)
{
	unsigned long	nb;
	char			*hex;

	nb = n;
	if (frm == 'x')
		hex = "0123456789abcdef";
	else if (frm == 'X')
		hex = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 15)
		ft_putchar(hex[nb]);
	if (nb > 15)
	{
		ft_puthex(nb / 16, frm);
		ft_puthex(nb % 16, frm);
	}
}
