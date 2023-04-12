/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:01:44 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/08 20:46:00 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap_a(t_linked *stacka)
{
	int	tmp;

	if (!stacka)
		exit(0);
	tmp = stacka->content;
	stacka->content = stacka->next->content;
	stacka->next->content = tmp;
	write(1, "sa\n", 3);
}

void	revers_a(t_linked *stacka)
{
	int	tmp;

	if (!stacka)
		exit(1);
	tmp = stacka->content;
	while (stacka)
	{
		if (stacka->next == NULL)
		{
			stacka->content = tmp;
			break ;
		}
		stacka->content = stacka->next->content;
		stacka = stacka->next;
	}
	write(1, "ra\n", 3);
}

void	push_tob(t_linked **stacka, t_linked **stackb)
{
	int			i;
	t_linked	*stacktmp;

	i = 0;
	ft_lstadd_front(stackb, ft_lstnew((*stacka)->content, i));
	*stacka = (*stacka)->next;
	stacktmp = *stacka;
	while (stacktmp)
	{
		stacktmp->index = i++;
		stacktmp = stacktmp->next;
	}
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
	write(1, "rra\n", 4);
}
