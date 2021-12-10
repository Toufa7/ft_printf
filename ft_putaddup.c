/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:13:59 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/08 23:14:43 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putaddup(unsigned long long nbr)
{
	if (nbr >= 16)
		ft_putaddup(nbr / 16);
	if (nbr % 16 <= 9)
		ft_putchar((nbr % 16) + 48);
	else
		ft_putchar((nbr % 16) + 55);
	return (ft_hexlen(nbr));
}
