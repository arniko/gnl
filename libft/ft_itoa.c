/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:04:45 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:04:46 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static short int	num_s(int n)
{
	short int	number_size;

	number_size = 0;
	while (n)
	{
		number_size++;
		n /= 10;
	}
	return (number_size);
}

static int			pw(int n1, int n2)
{
	int rt;

	if (n2 <= 0)
		return (1);
	rt = 1;
	while (n2--)
		rt *= n1;
	return (rt);
}

char				*ft_itoa(int n)
{
	short int	str_s;
	char		*new;
	short int	i;

	str_s = num_s(n);
	if (!(new = (n <= 0) ? (char *)malloc(sizeof(char) * (str_s + 2)) :
			(char *)malloc(sizeof(char) * (str_s + 1))))
		return (0);
	i = 0;
	if (n < 0 && ++i)
		new[0] = '-';
	if (n == 0 && ++i)
		new[0] = '0';
	while (--str_s >= 0)
		new[i++] = (n < 0) ? '0' - (n / pw(10, str_s)) % 10 :
								'0' + (n / pw(10, str_s)) % 10;
	new[i] = 0;
	return (new);
}
