/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:30:09 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/26 15:30:13 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i <= a->size)
	{
		if (a->all_stack[0] == a->max)
			pb(a, b);
		else if (a->all_stack[0] == a->min)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	special_cases(a);
	if (b->all_stack[0] == a->max)
		sb(b);
	pa(a, b);
	pa(a, b);
	ra(a);
}
