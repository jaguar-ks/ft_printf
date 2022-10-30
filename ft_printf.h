/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:32:46 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/30 22:40:33 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<string.h>

int	ft_printf(const char *s, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_puthex(long int n, char frm);
int	ft_strlen(char *s);

#endif
