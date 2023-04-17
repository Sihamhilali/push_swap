/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:38:49 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/15 18:16:35 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	swab_ba(t_linked *stacka, t_linked *stackb)
{
	swap(stacka);
	swap(stackb);
	write(1, "ss\n", 3);
}

void	r_revers_ab(t_linked *stacka, t_linked *stackb)
{
	r_revers_(&stacka);
	r_revers_(&stackb);
	write(1, "rrr\n", 4);
}

void	rr_ab(t_linked **stacka, t_linked **stackb)
{
	revers_ab(stacka);
	revers_ab(stackb);
	write(1, "rr\n", 3);
}
