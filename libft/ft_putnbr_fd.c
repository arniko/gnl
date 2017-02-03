/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:24:02 by astepovy          #+#    #+#             */
/*   Updated: 2016/12/01 14:24:08 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long nb_l;
	long temp;
	long size;

	nb_l = nb;
	size = 1;
	if (nb_l < 0)
	{
		ft_putchar_fd('-', fd);
		nb_l = -nb_l;
	}
	temp = nb_l;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb_l;
	while (size)
	{
		ft_putchar_fd((char)(temp / size) + 48, fd);
		temp %= size;
		size /= 10;
	}
}
