/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:57:43 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/13 21:45:54 by selhilal         ###   ########.fr       */
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

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
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
