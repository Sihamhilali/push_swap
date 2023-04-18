/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:01:37 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/18 00:02:54 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap_b(t_linked *stackb)
{
	int	tmp;
	int	pos;

	if (stackb)
	{
		tmp = stackb->content;
		pos = stackb->position;
		stackb->content = stackb->next->content;
		stackb->position = stackb->next->position;
		stackb->next->content = tmp;
		stackb->next->position = pos;
		addindex(&stackb);
		write(1, "sb\n", 3);
	}
}

void	retate_b(t_linked **stackb)
{
	int			tmp;
	int			pos;
	t_linked	*tmplist_b;

	tmplist_b = *stackb;
	if (stackb)
	{
		tmp = tmplist_b->content;
		pos = tmplist_b->position;
		while (tmp)
		{
			if (tmplist_b->next == NULL)
			{
			tmplist_b->content = tmp;
			tmplist_b->position = pos;
				break ;
			}
			tmplist_b->content = tmplist_b->next->content;
			tmplist_b->position = tmplist_b->next->position;
			tmplist_b = tmplist_b->next;
		}
		write(1, "rb\n", 3);
	}
}

void	push_toa(t_linked **stackb, t_linked **stacka)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	if (stackb)
	{
		ft_lstadd_front(stacka, ft_lstnew((*stackb)->content,
				(*stackb)->position));
		stacktmp = *stackb;
		*stackb = (*stackb)->next;
		free(stacktmp);
		addindex(stackb);
		addindex(stacka);
		write(1, "pa\n", 3);
	}
}

void	r_retate_b(t_linked **stackb)
{
	t_linked	*stacktmp;
	t_linked	*tmp;

	tmp = *stackb;
	if (*stackb)
	{
		stacktmp = ft_lstlast(*stackb);
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
				tmp->next = NULL;
				break ;
			}
			tmp = tmp->next;
		}
		stacktmp->next = *stackb;
		*stackb = stacktmp;
		addindex(stackb);
		write(1, "rrb\n", 4);
	}
}
