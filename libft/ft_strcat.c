/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:59:01 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/29 15:51:10 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = -1;
	while (s2[++j] && ++i)
		s1[i - 1] = s2[j];
	s1[i] = '\0';
	return (s1);
}
