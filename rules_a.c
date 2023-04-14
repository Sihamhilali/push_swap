/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:01:44 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/13 21:56:28 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap_a(t_linked *stacka)
{
	int	tmp;
	int	pos;

	if (!stacka)
		exit(0);
	tmp = stacka->content;
	pos = stacka->position;
	stacka->content = stacka->next->content;
	stacka->position = stacka->next->position;
	stacka->next->content = tmp;
	stacka->next->position = pos;
	addindex(&stacka);
	write(1, "sa\n", 3);
}

void	revers_a(t_linked **stacka)
{
	int			tmp;
	int			pos;
	t_linked	*tmplist_a;

	tmplist_a = *stacka;
	if (!stacka)
		exit(1);
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
	write(1, "ra\n", 3);
}

void	push_tob(t_linked **stacka, t_linked **stackb)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	if (!stacka)
	{
		free(stackb);
		exit(1);
	}
	ft_lstadd_front(stackb, ft_lstnew((*stacka)->content, (*stacka)->position));
	*stacka = (*stacka)->next;
	stacktmp = *stacka;
	addindex(stackb);
	addindex(stacka);
	write(1, "pb\n", 3);
}

void	r_revers_a(t_linked **stacka)
{
	t_linked	*stacktmp;
	t_linked	*tmp;

	tmp = *stacka;
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
	write(1, "rra\n", 4);
}
