/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkersteps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:13:49 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/18 00:02:18 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	swap_a_check(t_linked *stacka)
{
	int	tmp;
	int	pos;

	if (stacka)
	{
	tmp = stacka->content;
	pos = stacka->position;
	stacka->content = stacka->next->content;
	stacka->position = stacka->next->position;
	stacka->next->content = tmp;
	stacka->next->position = pos;
		addindex(&stacka);
	}
}

void	retate_a_check(t_linked **stacka)
{
	int			tmp;
	int			pos;
	t_linked	*tmplist_a;

	tmplist_a = *stacka;
	if (stacka)
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

void	push_tob_check(t_linked **stacka, t_linked **stackb)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	if (stacka)
	{
		ft_lstadd_front(stackb, ft_lstnew((*stacka)->content,
				(*stacka)->position));
		stacktmp = *stacka;
		*stacka = (*stacka)->next;
		free(stacktmp);
		addindex(stackb);
		addindex(stacka);
	}
}

void	r_retate_a_check(t_linked **stacka)
{
	t_linked	*stacktmp;
	t_linked	*tmp;

	tmp = *stacka;
	if ((*stacka))
	{
		stacktmp = ft_lstlast(*stacka);
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
			tmp->next = NULL;
				break ;
			}
			tmp = tmp->next;
		}
		stacktmp->next = *stacka;
		*stacka = stacktmp;
		addindex(stacka);
	}
}

void	r_retate_ab_check(t_linked *stacka, t_linked *stackb)
{
	r_retate_(&stacka);
	r_retate_(&stackb);
}
