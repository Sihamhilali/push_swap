/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:19:53 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/14 00:26:43 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Push_swap.h"

void	case_algo(t_linked **stacka, int *table)
{
	if (ft_lstsize(stacka) <= 200)
	{
		*table = ft_lstsize(stacka) / 5;
	}
	else if (ft_lstsize(stacka) <= 500)
	{
		*table = ft_lstsize(stacka) / 9;
	}
	else if (ft_lstsize(stacka) > 500)
	{
		*table = ft_lstsize(stacka) / 15;
	}
}
