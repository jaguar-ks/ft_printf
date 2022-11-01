/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:26:18 by faksouss          #+#    #+#             */
/*   Updated: 2022/11/01 02:18:37 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	prnt_frm(va_list arg, char frm)
{
	int	j;

	j = 0;
	if (frm == 'c')
		j = ft_putchar(va_arg(arg, int));
	if (frm == 's')
		j = ft_putstr(va_arg(arg, char *));
	if (frm == 'd' || frm == 'i')
		j = ft_putnbr(va_arg(arg, int));
	if (frm == 'u')
		j = ft_putun(va_arg(arg, unsigned int));
	if (frm == 'x' || frm == 'X')
		j = ft_prnt_hex(va_arg(arg, unsigned int), frm);
	if (frm == 'p')
		j = ft_put_add(va_arg(arg, void *));
	if (frm == '%')
		j = ft_putchar('%');
	return (j);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		j;

	va_start(arg, s);
	i = 0;
	j = 0;
	while (s[i] && i < ft_strlen((char *) s))
	{
		while (s[i] && s[i] != '%' && i < ft_strlen((char *) s))
		{
			write(1, &s[i], 1);
			i++;
			j++;
		}
		if (s[i] == '%' && i < ft_strlen((char *) s))
		{
			j += prnt_frm(arg, s[i + 1]);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (j);
}
