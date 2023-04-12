/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:16 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/12 22:04:35 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"


int	main(int argc,	char **argv)
{
	int			i;
	char		*h;
	char		**k;
	t_linked	*data;

	i = 1;
	data = NULL;
	h = malloc(1);
	if (argc > 1)
	{
		while (argv[i])
		{
			//empty(argv[i]);
			h = ft_strjoin(h, argv[i++]);
			h = ft_strjoin(h, " ");
		}
		k = ft_split(h, ' ');
		change(k);
		is_numbre(k);
		max_min(k);
		data = add(k);
		if (ft_lstsize(data) == 3)
			case_three(&data);
		else if (ft_lstsize(data) == 2)
			case_two(data);
		else if (ft_lstsize(data) == 4)
			case_four(&data);
		else if (ft_lstsize(data) == 5)
			case_five(&data);
	}
	return (0);
}
