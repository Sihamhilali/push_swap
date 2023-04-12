/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkdlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:33:48 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/09 00:03:38 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

t_linked	*ft_lstnew(int content, int i)
{
	t_linked	*ptr;

	ptr = (t_linked *)malloc(sizeof(t_linked));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	ptr->index = i;
	return (ptr);
}

t_linked	*ft_lstlast(t_linked	*lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

int	ft_lstsize(t_linked	*stacka)
{
	int			i;
	t_linked	*lst;

	lst = stacka;
	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}


void	ft_lstadd_back(t_linked	**lst, t_linked	*new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

void	ft_lstadd_front(t_linked	**lst, t_linked	*new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}
