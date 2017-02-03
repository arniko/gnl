/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:02:46 by astepovy          #+#    #+#             */
/*   Updated: 2016/11/30 17:02:47 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = lst;
	while (lst1)
	{
		lst2 = lst1->next;
		(*f)(lst1);
		lst1 = lst2;
	}
}
