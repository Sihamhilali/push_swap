/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:24:45 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:15:23 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	help(t_linked **stacka, t_linked **stackb)
{
	push_tob((stacka), stackb);
	case_three((stacka));
	push_toa(stackb, ((stacka)));
}

void	case_four(t_linked **stacka, t_linked	**stackb)
{
	int	index;

	index = ft_min(*(stacka));
	if (index < 2)
	{
		if ((*stacka)->content > (*stacka)->next->content)
			swap_a((*stacka));
		help(stacka, stackb);
	}
	if (index == 2)
	{
		r_retate_a((stacka));
		r_retate_a((stacka));
		help(stacka, stackb);
	}
	if (index == 3)
	{
		r_retate_a((stacka));
		help(stacka, stackb);
	}
}
