/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utilis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:17:13 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/12 22:04:17 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	change(char **split)
{
	int		i;
	int		num1;
	int		num2;
	int		n;

	n = 0;
	i = 0;
	while (split[n])
	{
		num1 = ft_atoi(split[n]);
		i = n;
		while (split[++i])
		{
			num2 = ft_atoi(split[i]);
			if (num1 == num2)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
		}
			n++;
	}
}

void	max_min(char **split)
{
	long	num1;
	int		n;

	n = 0;
	while (split[n])
	{
		num1 = ft_atoi(split[n]);
		if (num1 < -2147483647 || num1 > 2147483648)
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		n++;
	}
}

void	is_numbre(char **split)
{
	int		j;

	j = 0;
	while (split[j])
	{
		if (ft_isdigit(split[j]) == 1)
			j++;
		else
		{
			write(1, "Error\n", 6);
			exit(1);
		}
	}
}

