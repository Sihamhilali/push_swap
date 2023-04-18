/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:08 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 23:34:19 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	er(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	checkes(t_linked **stacka, t_linked **stackb, char *str)
{
	if (ft_strncmp(str, "sa\n", ft_strlen(str)) == 0)
		swap_a_check(*stacka);
	else if (ft_strncmp(str, "ra\n", ft_strlen(str)) == 0)
		retate_a_check(stacka);
	else if (ft_strncmp(str, "pb\n", ft_strlen(str)) == 0)
		push_tob_check(stacka, stackb);
	else if (ft_strncmp(str, "rra\n", ft_strlen(str)) == 0)
		r_retate_a_check(stacka);
	else if (ft_strncmp(str, "sb\n", ft_strlen(str)) == 0)
		swap_b_check(*stackb);
	else if (ft_strncmp(str, "rb\n", ft_strlen(str)) == 0)
		retate_b_check(stackb);
	else if (ft_strncmp(str, "pa\n", ft_strlen(str)) == 0)
		push_toa_check(stackb, stacka);
	else if (ft_strncmp(str, "rrb\n", ft_strlen(str)) == 0)
		r_retate_b_check(stackb);
	else if (ft_strncmp(str, "rr\n", ft_strlen(str)) == 0)
		rr_ab_check(stacka, stackb);
	else if (ft_strncmp(str, "rrr\n", ft_strlen(str)) == 0)
		r_retate_ab_check(*stacka, *stackb);
	else if (ft_strncmp(str, "ss\n", ft_strlen(str)) == 0)
		swab_ba_check(*stacka, *stackb);
	else
		er();
}

void	check(char **split)
{
	change(split);
	is_numbre(split);
	max_min(split);
}

void	get(t_linked **stacka, t_linked **stackb)
{
	char		*str;

	str = get_next_line(0);
	while (str)
	{
		checkes(stacka, stackb, str);
		free(str);
		str = get_next_line(0);
	}
	if (sorted1(stacka) == 1 && ft_lstsize(*stackb) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	int			i;
	char		*h;
	char		**k;
	t_linked	*stacka;
	t_linked	*stackb;

	i = 1;
	stackb = NULL;
	h = NULL;
	if (argc > 1)
	{
		empty(argv);
		while (argv[i])
		{
			h = ft_strjoin(h, argv[i++]);
		}
		k = ft_split(h, ' ');
		free(h);
		stacka = add(k);
		get(&stacka, &stackb);
	}
	return (0);
}
