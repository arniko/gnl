/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:02:23 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:02:23 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst_next;
	t_list	*lst_curr;

	lst_curr = *alst;
	lst_next = lst_curr->next;
	del(lst_curr->content, lst_curr->content_size);
	lst_curr = lst_next;
	while (lst_curr)
	{
		lst_next = lst_curr->next;
		del(lst_curr->content, lst_curr->content_size);
		free(lst_curr);
		lst_curr = lst_next;
	}
	free(*alst);
	*alst = 0;
}
