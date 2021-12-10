/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:17:00 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/08 22:18:42 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_intlen(int nbr)
{
	int	idx;
	int	sign;

	idx = 0;
	sign = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		sign = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		idx++;
	}
	return (idx + sign);
}
