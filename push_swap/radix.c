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

int	get_max_bits(t_stack *a)
{
	int	max_bits;
	int	size;

	max_bits = 0;
	size = a->size;
	while (size > 1 && ++max_bits)
		size /= 2;
	return (max_bits);
}

void	stack_index(t_stack *a, t_stack *c)
{
	int	i;
	int	j;
	int	index;

	i = -1;
	while (++i < a->size)
	{
		index = 0;
		j = -1;
		while (++j < a->size)
			if (a->all_stack[i] > a->all_stack[j])
				index++;
		c->all_stack[i] = index;
	}
	i = -1;
	while (++i < a->size)
		a->all_stack[i] = c->all_stack[i];
	free(c->all_stack);
}

void	radix(t_stack *a, t_stack *b, t_stack *c)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	c->size = a->size;
	c->all_stack = malloc(sizeof(int) * c->size + 1);
	stack_index(a, c);
	max_bits = get_max_bits(a);
	size = a->size;
	i = -1;
	while (++i <= max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if (((a->all_stack[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->size != 0)
			pa(a, b);
	}
}
