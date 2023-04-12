/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:01:37 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/09 17:31:01 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap_b(t_linked *stackb)
{
	int	tmp;

	if (!stackb)
		exit(0);
	tmp = stackb->content;
	stackb->content = stackb->next->content;
	stackb->next->content = tmp;
	write(1, "sb\n", 3);
}

void	revers_b(t_linked *stackb)
{
	int	tmp;

	if (!stackb)
		exit(1);
	tmp = stackb->content;
	while (stackb)
	{
		if (stackb->next == NULL)
		{
			stackb->content = tmp;
			break ;
		}
		stackb->content = stackb->next->content;
		stackb = stackb->next;
	}
	write(1, "rb\n", 3);
}

void	push_toa(t_linked **stackb, t_linked **stacka)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	ft_lstadd_front(stacka, ft_lstnew((*stackb)->content, i));
	*stackb = (*stackb)->next;
	stacktmp = *stackb;
	while (stacktmp)
	{
		stacktmp->index = i--;
		stacktmp = stacktmp->next;
	}
	write(1, "pa\n", 3);
}

void	r_revers_b(t_linked **stackb)
{
	t_linked	*stacktmp;
	t_linked	*tmp;

	tmp = *stackb;
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
	write(1, "rrb\n", 4);
}

