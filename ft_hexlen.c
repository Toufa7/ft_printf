/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:16:00 by otoufah           #+#    #+#             */
/*   Updated: 2021/12/08 22:16:56 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_hexlen(unsigned long long nbr)
{
	int	idx;

	if (nbr == 0)
		return (1);
	idx = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		idx++;
	}
	return (idx);
}
