/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:24:32 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/13 23:43:09 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	for_four(t_linked **stacka, t_linked	**stackb)
{
	r_revers_a((stacka));
	push_tob((stacka), stackb);
	for_index((stacka), stackb);
	push_toa(stackb, ((stacka)));
}

void	for_three(t_linked **stacka, t_linked	**stackb)
{
	r_revers_a((stacka));
	r_revers_a((stacka));
	push_tob((stacka), stackb);
	push_tob((stacka), stackb);
	for_index(stacka, stackb);
	push_toa(stackb, ((stacka)));
	push_toa(stackb, ((stacka)));
}

void	for_two(t_linked **stacka, t_linked	**stackb)
{
	r_revers_a((stacka));
	r_revers_a((stacka));
	r_revers_a((stacka));
	push_tob((stacka), stackb);
	for_index(stacka, stackb);
	push_toa(stackb, ((stacka)));
}

void	case_five(t_linked **stacka, t_linked	**stackb)
{
	int			index;

	index = 0;
	index = ft_min(*(stacka));
	if (index < 2)
	{
		for_index(stacka, stackb);
		push_tob((stacka), stackb);
		for_index((stacka), stackb);
		push_toa(stackb, ((stacka)));
	}
	if (index == 2)
	{
		for_two(stacka, stackb);
	}
	if (index == 3)
	{
		for_three(stacka, stackb);
	}
	if (index == 4)
	{
		for_four(stacka, stackb);
	}
}
