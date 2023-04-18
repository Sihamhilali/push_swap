/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkersteps2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:21:59 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:50:01 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap_b_check(t_linked *stackb)
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
	}
}

void	retate_b_check(t_linked **stackb)
{
	int			tmp;
	int			pos;
	t_linked	*tmplist_a;

	tmplist_a = *stackb;
	if (*stackb)
	{
		tmp = tmplist_a->content;
		pos = tmplist_a->position;
		while (tmp)
		{
			if (tmplist_a->next == NULL)
			{
				tmplist_a->content = tmp;
				tmplist_a->position = pos;
				break ;
			}
			tmplist_a->content = tmplist_a->next->content;
			tmplist_a->position = tmplist_a->next->position;
			tmplist_a = tmplist_a->next;
		}
	}
}

void	push_toa_check(t_linked **stackb, t_linked **stacka)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	if (*stackb)
	{
		ft_lstadd_front(stacka, ft_lstnew((*stackb)->content,
				(*stackb)->position));
		stacktmp = *stackb;
		*stackb = (*stackb)->next;
		free(stacktmp);
		addindex(stacka);
		addindex(stackb);
	}
}

void	r_retate_b_check(t_linked **stackb)
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
	}
}

void	rr_ab_check(t_linked **stacka, t_linked **stackb)
{
	retate_ab(stacka);
	retate_ab(stackb);
}
