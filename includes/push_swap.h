/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 06:33:01 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/07 12:59:20 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*previous;
	struct s_stack	*next;
	int				flag;
	bool			sorted : 1;
}	t_stack;

typedef struct s_state
{
	int	min;
	int	max;
	int	current_max;
	int	median;
	int	size_b;
	int	size;
	int col;//del
	int	next;
	int	flag;
	int	num_sorted;
	int	*sorted_array;
}	t_state;

typedef struct s_operations
{
	char				*action;
	struct s_operations	*next;
}	t_operations;

typedef struct s_index
{
	int	l;
	int	r;
	int	m;
	int	size_l;
	int	size_r;
	int	*left_array;
	int	*right_array;
}	t_index;

t_stack		*ft_init_stack(int value);
t_state	*ft_make_sort_state(int *arr, int argc);
void		ft_insert(t_stack **stack, int value, bool push_front);
void		ft_swap(t_stack *stack, t_operations **p, char stack_num);
void		ft_rotate(t_stack **a, t_operations **operations, char stack_num);
void		ft_r_reverse_rotate(t_stack **a, t_stack **b, t_operations **operations );
void		ft_reverse_rotate(t_stack **stack, t_operations **operations, char stack_num);
void		ft_push(t_stack **a, t_stack **b, t_operations **operations,
				char which_stack);
void		ft_pop(t_stack **stack);
void		ft_find_next(t_state **state, t_stack **a, t_operations **operations);
void		ft_manipulate_a(t_state **state, t_stack **a, t_stack **b,
				t_operations **operations);
void		ft_manipulate_b(t_state **state, t_stack **a, t_stack **b,
				t_operations **operations);
void		ft_merge_sort(int arr[], t_index *ind);
int			ft_stack_is_sorted(t_stack *a, int *arr, int size);
void		ft_operadd_back(t_operations **lst, char *operations);
void		ft_print_operations(t_operations *operations);
void		ft_free_all(t_state *state, t_stack **a, t_stack **b,
				t_operations **operations);
t_stack		*ft_parse_input(int argc, char **argv, int arr[]);

#endif
