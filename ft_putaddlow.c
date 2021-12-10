/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:13:16 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/08 23:13:55 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putaddlow(unsigned long long nbr)
{
	if (nbr >= 16)
		ft_putaddlow(nbr / 16);
	if (nbr % 16 <= 9)
		ft_putchar((nbr % 16) + 48);
	else
		ft_putchar((nbr % 16) + 87);
	return (ft_hexlen(nbr));
}
