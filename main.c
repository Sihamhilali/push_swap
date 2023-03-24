/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:16 by selhilal          #+#    #+#             */
/*   Updated: 2023/03/24 22:16:26 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "libft/libft.h"

//int	recherch(char **argv, char *c)
//{
//	int i;
//
//	i = 0;
//	while (argv[i])
//		if (ft_strncmp(argv[i++], c, ft_strlen(c)) == 0)
//			return 0;
//	return (1);
//}
//
//int	search(char str, char ptr)
//{
//	if (str == ptr)
//		return (1);
//	else
//		return (0);
//}

int	bla(char s)
{
	return (s == '+' || s == '-');
}

//int	duplicates(int *argv)
//{
//	int	i;
//	int	j;
//
//	i = 0;
//	while (i < ft_strlen(argv))
//	{
//		j = 0;
//		while (j < ft_strlen(argv))
//		{
//			if (argv[i] == argv[j] && j != i)
//				return (1);
//			j++;
//		}
//			i++;
//	}
//	return (0);
//}

void	test_isdigit(char **argv)
{
	int	i;
	int	j;

	i = 1;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
				exit(0);
				j++;
		}
			i++;
	}
}

void	valid(char *argv)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (argv[i])
	{
		if (bla(argv[i]) && argv[i - 1] != ' ' && i != 0)
			ft_error(NULL, NULL, NULL);
		if (bla(argv[i]) && !test_isdigit(argv[i + 1]))
			ft_error(NULL, NULL, NULL);
		if (test_isdigit(argv[i]) || argv[i] == ' ')
		count = 0;
		if (bla(argv[i]) && count < 2)
		count++;
		if (!test_isdigit(argv[i]) && !ft_is_blasign(argv[i]) && argv[i] != ' ')
			ft_error(NULL, NULL, NULL);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		//test_isdijit(argv);
		//ft_bla(argv);
			//if (recherch(argv, argv[i]) == 0)
			//{	
			//	write(1, "ho\n", 3);
			//}
			//else
			//{
			//	write(1, "error\n", 6);
			//	return (0);
			//}
			//i++;
		//}//
		//j = 0;
		//while (argv[1][j] != '\0')
		//{	
		//if (search(argv[1], "- ") == 1 || search(argv[1], "+") == 1)
		//{
		//	write(1,"bla",3);
		//	return (0);
		//}
		//else
		//{
		//	write(1,"good",4);
		//	return(1);	
		//}
		//j++;
		//}
	}
	return (0);
}
