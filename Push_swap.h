/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:06 by selhilal          #+#    #+#             */
/*   Updated: 2023/04/17 17:16:36 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void		empty(char **str);
char		*ft_strjoin(char *s1, char *s2);
char		**ft_split(char const *s, char c);
void		change(char **split);
void		is_numbre(char **split);
void		max_min(char **split);
void		t_free(char **str);
long		ft_atoi(char const *str);
int			ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
int			ft_isdigit(char *str);
typedef struct s_linked
{
	int				content;
	int				index;
	int				position;
	struct s_linked	*next;
}					t_linked;

t_linked	*add(char **split);
void		ft_lstdelone(t_linked	*lst);
void		ft_lstclear(t_linked **lst);
t_linked	*ft_lstnew(int content, int i);
t_linked	*ft_lstlast(t_linked	*lst);
int			ft_lstsize(t_linked	*stacka);
void		ft_lstadd_back(t_linked	**lst, t_linked	*new);
void		ft_lstadd_front(t_linked	**lst, t_linked	*new);
void		swap_a(t_linked *stacka);
void		swap_b(t_linked *stackb);
void		revers_a(t_linked **stacka);
void		revers_b(t_linked **stackb);
void		push_tob(t_linked **stacka, t_linked **stackb);
void		push_toa(t_linked **stackb, t_linked **stacka);
void		r_revers_a(t_linked **stacka);
void		r_revers_b(t_linked **stackb);
void		swap(t_linked *stack);
void		r_revers_(t_linked **stack);
void		revers_ab(t_linked **stack);
void		swab_ba(t_linked *stacka, t_linked *stackb);
void		r_revers_ab(t_linked *stacka, t_linked *stackb);
void		rr_ab(t_linked **stacka, t_linked **stackb);
void		addindex(t_linked **stack);
void		position(t_linked *stacka);
int			ft_min(t_linked	*stacka);
void		for_index(t_linked **stacka, t_linked **stackb);
void		case_two(t_linked *stacka);
void		case_three(t_linked **stacka);
void		case_four(t_linked **stacka, t_linked	**stackb);
void		case_five(t_linked **stacka, t_linked	**stackb);
void		case_algo(t_linked **stacka, t_linked **stackb, int table);
void		algo_position200(t_linked **stacka, t_linked **stackb, int size);
void		for_algo200(t_linked **stacka, t_linked **stackb, int table, int chunk);
int			to_index(t_linked *stackb, int position);
void		find_retation(t_linked **stacka, t_linked **stackb, int size, int index);


#endif