/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:03:51 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/13 23:31:44 by selhilal         ###   ########.fr       */
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

