/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:03:03 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:03:28 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		*memicpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;

	i = -1;
	while (++i < (unsigned long)n)
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	return (dst);
}

static t_list	*do_f(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*work;

	new = malloc(sizeof(t_list));
	work = (*f)(lst);
	new->content = malloc(work->content_size);
	memicpy(new->content, work->content, work->content_size);
	new->content_size = work->content_size;
	new->next = 0;
	return (new);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *anew;
	t_list *curr;
	t_list *next;
	t_list *curr2;
	t_list *next2;

	if (!(lst))
		return (0);
	curr = lst;
	next = curr->next;
	anew = do_f(curr, (*f));
	curr2 = anew;
	curr = next;
	while (curr)
	{
		next = curr->next;
		next2 = do_f(curr, (*f));
		curr = next;
		curr2->next = next2;
		curr2 = next2;
	}
	return (anew);
}
