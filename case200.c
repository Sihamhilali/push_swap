/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case200.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:32:37 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 17:48:16 by selhilal         ###   ########.fr       */
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
	while (*stackb)
	{
		if (size <= 1)
			break ;
		if (instriction(stackb, size - 1, ft_lstsize(*stackb)) < instriction(stackb, size - 2, ft_lstsize(*stackb)))
		{
			find_retation(stacka, stackb, ft_lstsize(*stackb), size - 1);
			find_retation(stacka, stackb, ft_lstsize(*stackb), size - 2);
			size -= 2;
		}
		else
		{
			find_retation(stacka, stackb, ft_lstsize(*stackb), size - 2);
			find_retation(stacka, stackb, ft_lstsize(*stackb), size - 1);
			swap_a(*stacka);
			size -= 2;
		}
	}
}
