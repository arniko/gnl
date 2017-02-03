/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:33:15 by astepovy          #+#    #+#             */
/*   Updated: 2016/12/01 14:33:19 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long nb_l;
	long temp;
	long size;

	nb_l = nb;
	size = 1;
	if (nb_l < 0)
	{
		ft_putchar('-');
		nb_l = -nb_l;
	}
	temp = nb_l;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb_l;
	while (size)
	{
		ft_putchar((char)(temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}
