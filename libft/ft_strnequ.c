/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:29:45 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/29 16:29:46 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t len)
{
	unsigned int	i;

	if ((!(s1)) || (!(s2)))
		return (0);
	i = 0;
	while (s1[i] && i < (unsigned int)len)
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i])
			return (0);
		i++;
	}
	return ((((unsigned char)s1[i] - (unsigned char)s2[i])
			&& (i != (unsigned int)len)) ? 0 : 1);
}
