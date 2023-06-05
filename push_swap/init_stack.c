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

void	fill_my_stack(int size, char **elem, t_stack *a, t_stack *b)
{
	int	i_arg;
	int	i_stack;
	int	nbr;

	i_arg = 0;
	i_stack = -1;
	a->size = size;
	b->size = 0;
	a->all_stack = malloc(sizeof(int) * size + 1);
	b->all_stack = malloc(sizeof(int) * size + 1);
	if (!a->all_stack)
	{
		free(a->all_stack);
		error_msg();
	}
	while (elem[++i_arg])
	{
		nbr = ft_atol(elem[i_arg]);
		if (nbr == 0 && elem[i_arg][0] != '0')
		{
			free(a->all_stack);
			printf("BANANA\n");
			error_msg();
		}
		a->all_stack[++i_stack] = nbr;
	}
}
