/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case100200.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:03:57 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 17:17:24 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	to_index(t_linked *stackb, int position)
{
	int			count;
	t_linked	*stack;

	count = 0;
	stack = stackb;
	while (stack && (stack)->position != position)
	{
		stack = (stack)->next;
		count++;
	}
	return (count);
}

void	find_retation(t_linked **stacka, t_linked **stackb, int size, int index)
{
	if (to_index(*stackb, index) <= size / 2)
	{
		while ((*stackb)->position != index)
		{
			//printf("%d\n",index);
			revers_b(stackb);
		}
	}
	else
	{
		while ((*stackb)->position != index)
		{
			r_revers_b(stackb);
		}
	}
	push_toa(stackb, stacka);
}
