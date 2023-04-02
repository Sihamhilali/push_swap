/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:16 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/02 23:12:56 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "libft/libft.h"

int	ft_isdigit(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		count++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			count++;
		}
		i++;
	}
	if (count == ft_strlen(str))
		return (1);
	return (0);
}

int	main(int argc,	char **argv)
{
	int		i;
	int		n;
	char	*h;
	char	**k;
	int		num1;
	int		num2;
	int		j;

	i = 1;
	j = 0;
	h = malloc(1);
	if (argc > 1)
	{
		while (argv[i])
		{
			h = ft_strjoin(h, argv[i++]);
			h = ft_strjoin(h, " ");
		}
		n = 0;
		k = ft_split(h, ' ');
		i = 0;
		while (k[n])
		{
			num1 = ft_atoi(k[n]);
			i = n;
			while(k[++i])
			{
				num2 = ft_atoi(k[i]);
				if(num1 == num2)
				exit(1);
			}
			n++;
		}
		while (k[j])
		{
			if (ft_isdigit(k[j]) == 1)
				j++;
			else
				exit(1);
		}
	}
	return (0);
}
