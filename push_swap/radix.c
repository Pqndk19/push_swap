/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:32:44 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/30 12:32:45 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_bits(t_stack *a)
{
	int max_bits;

	max_bits = 0;
	while ((a->max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void stack_index(t_stack *a, t_stack *c)
{
	int i;
	int j;
	i = 0;
	fill_c(a, c);
	sort_c(c);
	while (i < a->size)
	{
		j = 0;
		while (c->all_stack[j])
		{
			if (c->all_stack[j] == a->all_stack[i])
			{
				a->all_stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void radix(t_stack *a, t_stack *b, t_stack *c)
{
	int max_bits;
	int i;
	int j;
	int size;

	stack_index(a, c);
	max_bits = get_max_bits(a);
	size = a->size;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((a->all_stack[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->size != 0)
			pa(a, b);
		i++;
	}
}
