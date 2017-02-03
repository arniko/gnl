/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:03:41 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:03:50 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;
	size_t	count;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (!content)
		lst->content = 0;
	else
	{
		lst->content = malloc(content_size);
		count = 0;
		while (count < content_size)
		{
			((char *)(lst->content))[count] = ((char *)(content))[count];
			count++;
		}
	}
	lst->content_size = (content) ? content_size : 0;
	lst->next = 0;
	return (lst);
}
