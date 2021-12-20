/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:08:31 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/10 14:14:30 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	what_comes_next(char when, va_list arg)
{
	int	count;

	count = 0;
	if (when == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (when == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (when == 'd' || when == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (when == 'u')
		count += ft_putunnbr(va_arg(arg, unsigned int));
	else if (when == 'x')
		count += ft_putaddlow(va_arg(arg, unsigned int));
	if (when == 'X')
		count += ft_putaddup(va_arg(arg, unsigned int));
	else if (when == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putaddlow(va_arg(arg, unsigned long long int));
	}
	else if (when == '%')
		count += ft_putchar('%');
	else if (!when)
		write(1, "", 0);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if(!str[i + 1])
				break;
			count += what_comes_next(str[i + 1], arg);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
/*
#define officiel(a); printf("%d\n", ft_printf("%d | ", a));
#define mine(a); printf("%d\n", printf("%d | ", a));
*/
