/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:52:53 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 22:49:56 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

char	*ft_strdup(char *string)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(string));
	if (!ptr)
		return (NULL);
	while (string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 2));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i])
			str[i] = s1[i];
	str[i++] = ' ';
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
	free(s1);
	return (str);
}

void	t_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
