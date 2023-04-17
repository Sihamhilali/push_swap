/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:46:02 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 18:32:46 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

long	ft_atoi(char const *str)
{
	int		i;
	int		signe;
	long	somme;

	i = 0;
	signe = 1;
	somme = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		somme = somme * 10 + str[i] - '0';
		i++;
	}
	return (somme * signe);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*copied;
	char	*becopied;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	copied = (char *) dest;
	becopied = (char *) src;
	while (i < n)
	{
		copied[i] = becopied[i];
		i++;
	}
	return (dest);
}

t_linked	*add(char **split)
{
	t_linked	*stacka;
	int			i;

	stacka = NULL;
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(&stacka, ft_lstnew(ft_atoi(split[i]), 0));
		i++;
	}
	addindex(&stacka);
	position(stacka);
	return (stacka);
}

int	ft_min(t_linked *stacka)
{
	t_linked	*test;
	int			min;
	int			index;

	(test) = (stacka);
	min = (stacka)->content;
	index = (stacka)->index;
	while ((test)->next != NULL)
	{
		if ((test)->next->content < min)
		{
			min = (test)->next->content;
			index = (test)->next->index;
		}
		(test) = (test)->next;
	}
	return (index);
}
