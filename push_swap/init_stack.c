/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:12:14 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/15 15:12:15 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_my_stack(int size, char **elem, t_stack *a, t_stack *b, t_stack *c)
{
	int i_arg;
	int i_stack;
	int nbr;

	i_arg = 1;
	i_stack = 0;
	a->size = size;
	b->size = 0;
	c->size = size;
	a->all_stack = malloc(sizeof(int) * size + 1);
	b->all_stack = malloc(sizeof(int) * size + 1);
	c->all_stack = malloc(sizeof(int) * size + 1);
	if (!a->all_stack)
	{
		free(a->all_stack);
		error_msg();
	}
	while (elem[i_arg])
	{
		nbr = ft_atol(elem[i_arg]);
		if (nbr == 0 && elem[i_arg][0] != '0')
		{
			free(a->all_stack);
			error_msg();
		}
		a->all_stack[i_stack] = nbr;
		i_arg++;
		i_stack++;
	}
}