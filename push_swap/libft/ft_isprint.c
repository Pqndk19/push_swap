/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:09:11 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/03 11:09:13 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

/*int	main()
{
	char	c;
	
	c = '8';
	printf("%i\n", ft_isprint(c));
	c = 'f';
	printf("%i\n", ft_isprint(c));
	c = '*';
	printf("%i\n", ft_isprint(c));
	c = ' ';
	printf("%i\n", ft_isprint(c));
	
}*/
