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

void	sa(t_stack *a)
{
	int	tmp;

	tmp = a->all_stack[0];
	a->all_stack[0] = a->all_stack[1];
	a->all_stack[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	tmp;

	tmp = b->all_stack[0];
	b->all_stack[0] = b->all_stack[1];
	b->all_stack[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = a->all_stack[0];
	a->all_stack[0] = a->all_stack[1];
	a->all_stack[1] = tmp_a;
	tmp_b = b->all_stack[0];
	b->all_stack[0] = b->all_stack[1];
	b->all_stack[1] = tmp_b;
	write(1, "ss\n", 3);
}

void	ra(t_stack *a)
{
	int	tmp;
	int	i;

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

void	rb(t_stack *b)
{
	int	tmp;
	int	i;

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
