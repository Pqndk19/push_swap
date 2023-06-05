/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:16:35 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/15 14:16:37 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_stack	c;

	if (argc < 2)
		return (0);
	check_stack(argv);
	fill_my_stack(argc - 1, argv, &a, &b);
	see_dup(&a);
	if (is_ordered(&a) == 0)
	{
		free_stacks(&a, &b);
		exit_success();
	}
	get_mn(&a);
	if (argc == 3)
		sa(&a);
	else if (argc == 4)
		special_cases(&a);
	else if (argc == 6)
		sort_5(&a, &b);
	else
		radix(&a, &b, &c);
	free_stacks(&a, &b);
}
