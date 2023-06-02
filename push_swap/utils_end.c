/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:57:45 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/30 13:57:46 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_msg(void)
{
	ft_putstr_fd("Error", 1);
	write(1, "\n", 1);
	exit (1);
}

void exit_success(void)
{
	exit(1);
}

void free_stacks(t_stack *a, t_stack *b, t_stack *c)
{
	free(a->all_stack);
	free(b->all_stack);
	free(c->all_stack);
}