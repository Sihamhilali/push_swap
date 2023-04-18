/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:58:49 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:30:39 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	sorted1(t_linked **stacka)
{
	t_linked	*test;
	int			count;

	count = 1;
	test = *stacka;
	while (test->next)
	{
		if (test->content < test->next->content)
			count++;
		test = test->next;
	}
	if (count == ft_lstsize(*stacka))
	{
		return (1);
	}
	return (0);
}

void	swab_ba_check(t_linked *stacka, t_linked *stackb)
{
	swap(stacka);
	swap(stackb);
}
