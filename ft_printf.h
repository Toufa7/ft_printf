/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:09:44 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/08 23:34:09 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_intlen(int nbr);
int	ft_putunnbr(unsigned int nbr);
int	ft_unlen(unsigned int nbr);
int	ft_putaddup(unsigned long long nbr);
int	ft_putaddlow(unsigned long long nbr);
int	ft_hexlen(unsigned long long nbr);

#endif
