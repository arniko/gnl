/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:57:23 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 14:18:39 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && (i < len))
	{
		dest[i] = src[i];
		i++;
	}
	while (i != len)
		dest[i++] = '\0';
	return (dest);
}
