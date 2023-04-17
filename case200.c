/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case200.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:32:37 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 01:19:41 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	instriction(t_linked **stackb, int position, int size)
{
	int	top;
	int	bottom;
	top = to_index(*stackb, position);
	bottom = size - top;
	if (top >= size / 2)
		return (bottom);
	else
		return (top);
}

void	algo_position200(t_linked **stacka, t_linked **stackb, int size)
{
	
	size -= 1;
	(void)stacka;
	while (*stackb)
	{
		if (ft_lstsize(*stackb) !=  0)
			if (instriction(stackb, size, size) < instriction(stackb, size - 1, size))
			{
				find_retation(stacka, stackb, size , size);
				find_retation(stacka, stackb, size, size - 1);
				swap_a(*stacka);
			}
			else
			{
				find_retation(stacka, stackb, size, size - 1);
				find_retation(stacka, stackb, size, size);
			}
		else
			break;
		
		size = ft_lstsize(*stackb) - 2;
	}
}

void	for_algo200(t_linked **stacka, t_linked **stackb, int table, int chunk)
{
	int	count;

	count = 0;
	//int size = ft_lstsize(*stacka);
	while (*stacka)
	{
			if ((*stacka)->position >= chunk)
				revers_a(stacka);
			else
			{
				push_tob(stacka, stackb);
					count++;
				if ((*stackb)->position > chunk - (table / 2))
				{
					if (*stacka && count != chunk && (*stacka)->position >= chunk)
						rr_ab(stacka, stackb);
					else
						revers_b(stackb);
				}
			}
		if(ft_lstsize(*stackb) == chunk)
			chunk += table;
	}
}
