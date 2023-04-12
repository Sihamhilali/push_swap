/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:03:51 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/09 17:31:52 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	case_two(t_linked *stacka)
{
	int			a;
	int			b;

	a = stacka->content;
	b = stacka->next->content;
	if (a > b)
		swap_a(stacka);
}


void	case_three(t_linked **stacka)
{
	int			a;
	int			b;
	int			c;

	a = (*stacka)->content;
	b = (*stacka)->next->content;
	c = (*stacka)->next->next->content;
	if ((a > b) && (c > a) && (c > b))
		swap_a((*stacka));
	else if ((a > b) && (a > c) && (b > c))
	{
		swap_a((*stacka));
		r_revers_a(stacka);
	}
	else if ((a < b) && (c > a) && (c < b))
	{
		swap_a((*stacka));
		revers_a((*stacka));
	}
	else if ((a < b) && (c < a) && (c < b))
		r_revers_a(stacka);
	else if ((a > b) && (c < a) && (c > b))
		revers_a((*stacka));
}

void	case_five(t_linked **stacka)
{
	t_linked	*stackb;
	int			index;

	index = 0;
	stackb = NULL;
	index = ft_min(*(stacka));
	if (index < 2)
	{
		if ((*stacka)->content > (*stacka)->next->content)
			swap_a((*stacka));
			push_tob(&(*stacka), &stackb);
			case_four(&(*stacka));
			push_toa(&stackb, &(*(stacka)));
	}
	if (index == 2)
	{
		r_revers_a((stacka));
		r_revers_a((stacka));
		r_revers_a((stacka));
		push_tob(&(*stacka), &stackb);
		case_four(&(*stacka));
		push_toa(&stackb, &(*(stacka)));
	}
	if (index == 3)
	{
		r_revers_a((stacka));
		r_revers_a((stacka));
		push_tob(&(*stacka), &stackb);
		case_four(&(*stacka));
		push_toa(&stackb, &(*(stacka)));
	}
	if (index == 4)
	{
		r_revers_a((stacka));
		push_tob(&(*stacka), &stackb);
		case_four(&(*stacka));
		push_toa(&stackb, &(*(stacka)));
	}
}

void	help(t_linked **stacka, t_linked *stackb)
{
	r_revers_a((stacka));
	r_revers_a((stacka));
	push_tob(&(*stacka), &stackb);
	case_three(&(*stacka));
	push_toa(&stackb, &(*(stacka)));
}

void	case_four(t_linked **stacka)
{
	t_linked	*stackb;
	int			index;

	stackb = NULL;
	index = ft_min(*(stacka));
	if (index < 2)
	{
		if ((*stacka)->content > (*stacka)->next->content)
			swap_a((*stacka));
		push_tob(&(*stacka), &stackb);
		case_three(&(*stacka));
		push_toa(&stackb, &(*(stacka)));
	}
	if (index == 2)
		help(stacka, stackb);
	if (index == 3)
	{
		r_revers_a((stacka));
		push_tob(&(*stacka), &stackb);
		case_three(&(*stacka));
		push_toa(&stackb, &(*(stacka)));
	}
}
