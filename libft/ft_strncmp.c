/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:31:29 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/22 11:57:25 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				out;
	unsigned int	i;

	i = -1;
	out = 0;
	while (s1[++i] != '\0' && !(out) && i < (unsigned int)n)
		out = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	out = (!out && i != n) ? ((int)((unsigned char)s1[i] -
										(unsigned char)s2[i])) : out;
	return (out);
}
