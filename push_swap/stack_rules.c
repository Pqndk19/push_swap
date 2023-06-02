/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:48:30 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/16 14:48:31 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void get_mn(t_stack *a)
{
	int i;

	i = 0;
	a->min = a->all_stack[0];
	a->max = a->all_stack[0];
	while (i < a->size)
	{
		if (a->max < a->all_stack[i])
			a->max = a->all_stack[i];
		i++;
	}
	i = 0;
	while (i < a->size)
	{
		if (a->min > a->all_stack[i])
			a->min = a->all_stack[i];
		i++;
	}
	//printf("MAX: %d\n", a->max);
	//printf("MIN: %d\n", a->min);
}

int is_digit(int nbr)
{
	if (nbr >= '0' && nbr <= '9')
		return (1);
	return (0);
}

void check_stack(char **elem)
{
	int i;
	int j;

	i = 1;
	while (elem[i])
	{
		j = 0;
		while (elem[i][j])
		{
			if ((!is_digit(elem[i][j]) && elem[i][j] != '-')
				|| (elem[i][j] == '-' && !is_digit(elem[i][j + 1])))
				error_msg();
			j++;
		}
		i++;
	}
}

void see_dup(t_stack *a)
{
	int i;
	int curr;

	curr = 0;
	while (curr < a->size)
	{
		i = curr + 1;
		while (i < a->size)
		{
			if (a->all_stack[i] == a->all_stack[curr])
			{
				free(a->all_stack);
				error_msg();
			}
			i++;
		}
		curr++;
	}
}

int is_ordered(t_stack *a)
{
	int i;

	i = 0;
	while (i < a->size - 1)
	{
			if (a->all_stack[i] > a->all_stack[i + 1])
				return (1);
		i++;
	}
	return (0);
}