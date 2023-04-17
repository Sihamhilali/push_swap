/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:24:41 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/15 18:00:36 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	case_three(t_linked **stacka)
{
	int	c;

	c = (*stacka)->next->next->content;

	if ((*stacka)->content < (*stacka)->next->content
		&& (*stacka)->next->content < c)
		return ;
	else
	{
		if (((*stacka)->content > (*stacka)->next->content)
			&& (c > (*stacka)->content) && (c > (*stacka)->next->content))
			swap_a((*stacka));
		if (((*stacka)->content > (*stacka)->next->content)
			&& ((*stacka)->content > c) && ((*stacka)->next->content > c))
		{
			swap_a((*stacka));
			r_revers_a(stacka);
		}
		if (((*stacka)->content < (*stacka)->next->content)
			&& (c > (*stacka)->content) && (c < (*stacka)->next->content))
		{
			swap_a((*stacka));
			revers_a((stacka));
		}
		if (((*stacka)->content < (*stacka)->next->content)
			&& (c < (*stacka)->content) && (c < (*stacka)->next->content))
			r_revers_a(stacka);
		if (((*stacka)->content > (*stacka)->next->content)
			&& (c < (*stacka)->content) && (c > (*stacka)->next->content))
			revers_a((stacka));
	}
}
