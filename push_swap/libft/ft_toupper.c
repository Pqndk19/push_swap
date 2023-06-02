/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:38:20 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/04 14:38:22 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c = c - 32;
	}
	return (c);
}

/*int	main()
{
	int	a;

	a = 'c';
	printf("%c\n", ft_toupper(a));
	a = 'G';
	printf("%c\n", ft_toupper(a));
	a = '7';
	printf("%c\n", ft_toupper(a));
}*/
