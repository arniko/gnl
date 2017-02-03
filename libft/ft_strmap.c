/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:34:04 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/28 15:02:00 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	size;
	unsigned int	i;

	if (!(s))
		return (0);
	size = 0;
	while (s[size])
		size++;
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (i < size)
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
