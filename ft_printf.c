/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:26:18 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/30 22:49:30 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int 	i;
	int		j;

	va_start(arg, s);
	i = -1;
	j = 0;
	while (s[++i])
	{
		while (s[i] && s[i] != '%')
			write(1, &s[i], 1);
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_putchar(va_arg(arg, char));
			if (s[i] == 's')
				ft_putstr(va_arg(arg, char *));
			if (s[i] == 'd' || s[i] == 'i')
				ft_putnbr(va_arg(arg, int));
			if (s[i] == 'x' || s[i] == 'X')
				ft_puthex(va_arg(arg, int), s[i]);
			if (s[i] == 'p')
				ft_puthex(va_arg(arg, int), s[i]);
			if (s[i] == '%')
				ft_putchar('%');
		}
	}
}