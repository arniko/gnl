/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:10:18 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:13:12 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int out;
	int i;

	i = -1;
	out = 0;
	while (s1[++i] != '\0' && !(out))
		out = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	out = (!out) ? ((int)((unsigned char)s1[i] - (unsigned char)s2[i]))
		: out;
	return (out);
}
