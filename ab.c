/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:38:49 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 21:59:57 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swab_ba(t_linked *stacka, t_linked *stackb)
{
	swap(stacka);
	swap(stackb);
	write(1, "ss\n", 3);
}

void	r_retate_ab(t_linked *stacka, t_linked *stackb)
{
	r_retate_(&stacka);
	r_retate_(&stackb);
	write(1, "rrr\n", 4);
}

void	rr_ab(t_linked **stacka, t_linked **stackb)
{
	retate_ab(stacka);
	retate_ab(stackb);
	write(1, "rr\n", 3);
}
