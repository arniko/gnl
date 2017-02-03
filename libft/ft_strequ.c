/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:04:42 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 13:04:43 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned int	it;

	if ((!(s1)) || (!(s2)))
		return (0);
	it = 0;
	while (s1[it])
	{
		if ((unsigned char)s1[it] - (unsigned char)s2[it])
			return (0);
		it++;
	}
	return (s2[it] ? 0 : 1);
}
