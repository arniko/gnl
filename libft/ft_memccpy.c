/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:06:15 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 12:16:05 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*((unsigned char*)dst++) = *((unsigned char*)src++);
		if (*((unsigned char*)src) == (unsigned char)c)
		{
			*((unsigned char*)dst++) = *((unsigned char*)src);
			return (dst);
		}
	}
	return (NULL);
}
