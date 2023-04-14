/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:02:10 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/13 23:17:06 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swap(t_linked *stack)
{
	int	tmp;
	int	pos;

	if (!stack)
		exit(0);
	tmp = stack->content;
	pos = stack->position;
	stack->content = stack->next->content;
	stack->position = stack->next->position;
	stack->next->content = tmp;
	stack->next->position = pos;
	addindex(&stack);
}

void	swab_ba(t_linked *stacka, t_linked *stackb)
{
	swap(stacka);
	swap(stackb);
	write(1, "ss\n", 3);
}

void	r_revers(t_linked **stack)
{
	int			tmp;
	int			pos;
	t_linked	*tmplist_a;

	tmplist_a = *stack;
	if (!stack)
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
}

void	r_revers_ab(t_linked *stacka, t_linked *stackb)
{
	r_revers(&stacka);
	r_revers(&stackb);
	write(1, "rrr\n", 4);
}
