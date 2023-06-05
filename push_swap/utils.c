/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:28:37 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/05/18 15:28:41 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_spc(t_stack *a)
{
	int	max;
	int	i;

	i = 0;
	max = a->all_stack[i];
	while (i < 3)
	{
		if (max < a->all_stack[i])
			max = a->all_stack[i];
		i++;
	}
	return (max);
}

int	get_min_spc(t_stack *a)
{
	int	min;
	int	i;

	i = 0;
	min = a->all_stack[i];
	while (i < 3)
	{
		if (min > a->all_stack[i])
			min = a->all_stack[i];
		i++;
	}
	return (min);
}

long	ft_atol(const char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > INT_MAX || res < INT_MIN)
		return (0);
	return (res * sign);
}
