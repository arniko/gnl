/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:34:12 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 14:36:38 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	k = i;
	i = 0;
	while (s2[i] != '\0' && ((j + i) < (size - 1)))
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return ((size_t)(k + ((j < size) ? j : size)));
}
