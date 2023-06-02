/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:00:42 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/16 14:00:43 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;

	sign = 1;
	i = ft_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	if (n < 0)
	{
		sign = -1;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		i--;
		str[i] = (n % 10 * sign) + '0';
		n = n / 10;
	}
	return (str);
}

/* int	main(void)
// {
// 	int	n = -2342342;
// 	char *y;

// 	y = ft_itoa(n);
// 	printf("%s\n", y);
// }
*/