/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:58:05 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/04 14:58:08 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
	}
	return (c);
}

/*int	main()
{
	int	a;

	a = 'c';
	printf("%c\n", ft_tolower(a));
	a = 'G';
	printf("%c\n", ft_tolower(a));
	a = '7';
	printf("%c\n", ft_tolower(a));
}*/