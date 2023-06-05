/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:16:22 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/15 14:16:24 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int *all_stack;
	int size;
	int max;
	int min;
}	t_stack;


void fill_my_stack(int size, char **elem, t_stack *a, t_stack *b);
void error_msg(void);
void check_stack(char **elem);
void see_dup(t_stack *a);
long	ft_atol(const char *str);
int is_ordered(t_stack *a);
void exit_success(void);
void free_stacks(t_stack *a, t_stack *b);
void radix(t_stack *a, t_stack *b, t_stack *c);
int get_max_bits(t_stack *a);
void stack_index(t_stack *a, t_stack *c);
void fill_c(t_stack *a, t_stack *c);
void sort_c(t_stack *c);
void get_mn(t_stack *a);
void special_cases(t_stack *a);
int get_max_spc(t_stack *a);
int get_min_spc(t_stack *a);
void sort_5(t_stack *a, t_stack *b);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
