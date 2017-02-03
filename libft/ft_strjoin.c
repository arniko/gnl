/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:38:28 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 12:59:51 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int		str_size(char const *s)
{
	unsigned int	j;

	j = 0;
	while (s[j])
		j++;
	return (j);
}

char					*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	con_size;
	unsigned int	i;
	unsigned int	size1;
	char			*new;

	if ((!(s1)) || (!(s2)))
		return (0);
	size1 = str_size(s1);
	con_size = size1 + str_size(s2);
	if (!(new = (char *)malloc(sizeof(char) * (con_size + 2))))
		return (0);
	i = 0;
	while (i <= con_size)
	{
		if (i < size1)
			new[i] = s1[i];
		else
			new[i] = s2[i - size1];
		i++;
	}
	return (new);
}
