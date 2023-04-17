/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:57:43 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 22:53:55 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

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

void	ft_lstdelone(t_linked	*lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstclear(t_linked **lst)
{
	t_linked	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst);
		*lst = tmp;
	}
	free(tmp);
}

int	ins(t_linked **stackb, int position, int size)
{
	int	up;
	int	down;

	up = to_index(*stackb, position);
	down = size - up;
	if (up >= size / 2)
		return (down);
	else
		return (up);
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
