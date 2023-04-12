/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:06 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/12 22:04:26 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

long		ft_atoi(char const *str);
int			ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_isdigit(char *str);
void		change(char **split);
void		max_min(char **split);
void		is_numbre(char **split);
typedef struct s_linked
{
	int				content;
	int				index;
	struct s_linked	*next;
}					t_linked;

int			ft_lstsize(t_linked	*stacka);
t_linked	*ft_lstlast(t_linked	*lst);
void		ft_lstadd_back(t_linked	**lst, t_linked	*new);
void		ft_lstadd_front(t_linked	**lst, t_linked	*new);
t_linked	*ft_lstnew(int content, int i);
void		swap_a(t_linked *stacka);
void		revers_a(t_linked *stacka);
void		push_tob(t_linked **stacka, t_linked **stackb);
void		r_revers_a(t_linked **stacka);
void		swap_b(t_linked *stackb);
void		revers_b(t_linked *stackb);
void		push_toa(t_linked **stackb, t_linked **stacka);
void		r_revers_b(t_linked **stackb);
t_linked	*add(char **split);
void		case_three(t_linked **stacka);
void		case_two(t_linked *stacka);
void		case_four(t_linked **stacka);
void		case_five(t_linked **stacka);
//void		empty(char *split);
int			ft_isdigit(char *str);
char		*ft_strchr(const char *str, int c);
int			ft_min(t_linked *stacka);
#endif