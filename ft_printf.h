/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:32:46 by faksouss          #+#    #+#             */
/*   Updated: 2022/11/01 11:01:52 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<stdarg.h>
# include<unistd.h>
# include<string.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_put_hex(unsigned long n, char frm);
int		ft_strlen(char *s);
int		tol(long int nb, int base);
int		ft_putun(unsigned int n);
int		ft_put_add(void *p);
int		prnt_frm(va_list arg, char frm);

#endif
