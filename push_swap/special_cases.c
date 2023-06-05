/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:01:46 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/25 14:01:48 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	special_cases(t_stack *a)
{
	int	max;
	int	min;

	max = get_max_spc(a);
	min = get_min_spc(a);
	if (a->all_stack[0] != min && a->all_stack[2] == max)
		sa(a);
	else if (a->all_stack[0] == max && a->all_stack[2] == min)
	{
		sa(a);
		rra(a);
	}
	else if (a->all_stack[0] == max && a->all_stack[2] != min)
		ra(a);
	else if (a->all_stack[0] == min && a->all_stack[2] != max)
	{
		sa(a);
		ra(a);
	}
	else if (a->all_stack[0] != max && a->all_stack[2] == min)
		rra(a);
}
