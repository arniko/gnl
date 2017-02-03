/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:43:46 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/29 16:13:46 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int j;

	if ((unsigned long)dst < (unsigned long)src)
	{
		j = 0;
		while (n-- > 0)
		{
			((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
			j++;
		}
	}
	else
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}
