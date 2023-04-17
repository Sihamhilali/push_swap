/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:56:33 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:16:56 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	position(t_linked *stacka)
{
	t_linked	*head;
	t_linked	*test;

	stacka->position = 0;
	head = stacka;
	while (head)
	{
		test = head->next;
		while (test)
		{
			if (head->content > test->content)
				head->position = head->position + 1;
			else
				test->position = test->position + 1;
			test = test->next;
		}
		head = head->next;
	}
}

void	addindex(t_linked **stack)
{
	int			i;
	t_linked	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
}
