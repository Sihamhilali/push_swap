/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:03:25 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:15:48 by selhilal         ###   ########.fr       */
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
			retate_b(stackb);
		}
	}
	else
	{
		while ((*stackb)->position != index)
		{
			r_retate_b(stackb);
		}
	}
	push_toa(stackb, stacka);
}

void	algo_position(t_linked **stacka, t_linked **stackb, int size)
{
	while (*stackb)
	{
		if (size <= 1)
			break ;
		if (ins(stackb, size - 1, ft_lstsize(*stackb))
			< ins(stackb, size - 2, ft_lstsize(*stackb)))
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

void	for_algo(t_linked **stacka, t_linked **stackb, int table, int chunk)
{
	int	count;

	count = 0;
	while (*stacka)
	{
		if ((*stacka)->position >= chunk)
			retate_a(stacka);
		else
		{
			push_tob(stacka, stackb);
				count++;
			if ((*stackb)->position > chunk - (table / 2))
			{
				if (*stacka && count != chunk && (*stacka)->position >= chunk)
					rr_ab(stacka, stackb);
				else
					retate_b(stackb);
			}
		}
		if (ft_lstsize(*stackb) == chunk)
			chunk += table;
	}
}

void	case_algo(t_linked **stacka, t_linked **stackb, int table)
{
	int	size;
	int	chunk;

	size = ft_lstsize(*stacka);
	if (size < 200)
	{
		table = size / 5;
		chunk = table;
		for_algo(stacka, stackb, table, chunk);
		algo_position(stacka, stackb, size);
	}
	else if (size >= 200)
	{
		table = size / 9;
		chunk = table;
		for_algo(stacka, stackb, table, chunk);
		algo_position(stacka, stackb, size);
	}
}
