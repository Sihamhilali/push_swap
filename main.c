/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:16 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 16:33:46 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"


void	for_index(t_linked **stacka, t_linked **stackb)
{
	if (ft_lstsize(*stacka) == 3)
		case_three(stacka);
	else if (ft_lstsize(*stacka) == 2)
		case_two(*stacka);
	else if (ft_lstsize(*stacka) == 4)
		case_four(stacka, stackb);
	else if (ft_lstsize(*stacka) == 5)
		case_five(stacka, stackb);
	else
		case_algo(stacka, stackb, 0);
}

void	sorted(t_linked *stacka)
{
	t_linked	*test;
	int			count;

	count = 1;
	test = stacka;
	while (test->next)
	{
		if (test->content < test->next->content)
			count++;
		test = test->next;
	}
	if (count == ft_lstsize(stacka))
	{
		exit(0);
	}
}

int	main(int argc,	char **argv)
{
	int			i;
	char		*h;
	char		**k;
	t_linked	*stacka;
	t_linked	*stackb;

	i = 1;
	stacka = NULL;
	stackb = NULL;
	if (argc > 1)
	{
		empty(argv);
		while (argv[i])
		{
			h = ft_strjoin(h, argv[i++]);
			h = ft_strjoin(h, " ");
		}
		k = ft_split(h, ' ');
		free(h);
		change(k);
		is_numbre(k);
		max_min(k);
		stacka = add(k);
		t_free(k);
		sorted(stacka);
		for_index(&stacka, &stackb);
		ft_lstclear(&stacka);
	}
	return (0);
}
