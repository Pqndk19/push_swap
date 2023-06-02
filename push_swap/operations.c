/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:23:22 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/19 15:23:25 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a)
{
	int tmp;

	tmp = a->all_stack[0];
	a->all_stack[0] = a->all_stack[1];
	a->all_stack[1] = tmp;
	write(1, "sa\n", 3);
}

void sb(t_stack *b)
{
	int tmp;

	tmp = b->all_stack[0];
	b->all_stack[0] = b->all_stack[1];
	b->all_stack[1] = tmp;
	write(1, "sb\n", 3);
}

void ss(t_stack *a, t_stack *b)
{
	int tmp_a;
	int tmp_b;

	tmp_a = a->all_stack[0];
	a->all_stack[0] = a->all_stack[1];
	a->all_stack[1] = tmp_a;
	tmp_b = b->all_stack[0];
	b->all_stack[0] = b->all_stack[1];
	b->all_stack[1] = tmp_b;
	write(1, "ss\n", 3);
}

void ra(t_stack *a)
{
	int tmp;
	int i;

	i = 0;
	tmp = a->all_stack[0];
	while (i < a->size - 1)
	{
		a->all_stack[i] = a->all_stack[i + 1];
		i++;
	}
	a->all_stack[i] = tmp;
	write(1, "ra\n", 3);
}

void rb(t_stack *b)
{
	int tmp;
	int i;

	i = 0;
	tmp = b->all_stack[0];
	while (i < b->size - 1)
	{
		b->all_stack[i] = b->all_stack[i + 1];
		i++;
	}
	b->all_stack[i] = tmp;
	write(1, "rb\n", 3);
}


void rra(t_stack *a)
{
	int tmp;
	int i;

	i = a->size - 1;
	tmp = a->all_stack[i];
	while (i > 0)
	{
		a->all_stack[i] = a->all_stack[i - 1];
		i--;
	}
	a->all_stack[i] = tmp;
	write(1, "rra\n", 4);	
}

void rrb(t_stack *b)
{
	int tmp;
	int i;

	i = b->size - 1;
	tmp = b->all_stack[i];
	while (i > 0)
	{
		b->all_stack[i] = b->all_stack[i - 1];
		i--;
	}
	b->all_stack[i] = tmp;
	write(1, "rrb\n", 4);	
}

void pa(t_stack *a, t_stack *b)
{
	
	int i;
	int j;

	i = 0;
	a->size++;;
	j = a->size - 1;
	while (j > 0)
	{
		a->all_stack[j] = a->all_stack[j - 1];
		j--;
	}
	a->all_stack[0] = b->all_stack[0];
	while (i < b->size)
	{
		b->all_stack[i] = b->all_stack[i + 1];
		i++;
	}
	b->all_stack[b->size - 1] = 0;
	b->size--;
	write(1, "pa\n", 3);
}

void pb(t_stack *a, t_stack *b)
{
	int i;
	int j;

	i = 0;
	b->size++;
	j = b->size - 1;
	while (j > 0)
	{
		b->all_stack[j] = b->all_stack[j - 1];
		j--;
	}
	b->all_stack[0] = a->all_stack[0];
	while (i < a->size - 1)
	{
		a->all_stack[i] = a->all_stack[i + 1];
		i++;
	}
	a->size--;
	write(1, "pb\n", 3);
}
