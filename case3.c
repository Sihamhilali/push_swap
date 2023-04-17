/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:24:41 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:15:10 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	case_three(t_linked **stacka)
{
	int	a;
	int	b;
	int	c;

	a = (*stacka)->content;
	b = (*stacka)->next->content;
	c = (*stacka)->next->next->content;
	if ((a > b) && (c > a) && (c > b))
		swap_a((*stacka));
	if ((a > b) && (a > c) && (b > c))
	{
		swap_a((*stacka));
		r_retate_a(stacka);
	}
	if ((a < b) && (c > a) && (c < b))
	{
		swap_a((*stacka));
		retate_a((stacka));
	}
	if ((a < b) && (c < a) && (c < b))
		r_retate_a(stacka);
	if ((a > b) && (c < a) && (c > b))
		retate_a((stacka));
}
