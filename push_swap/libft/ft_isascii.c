/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:38:18 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/03 10:38:21 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

/*int	main()
{
	char	c;
	
	c = '0';
	printf("%i\n", ft_isascii(c));
	c = 'f';
	printf("%i\n", ft_isascii(c));
	c = '>';
	printf("%i\n", ft_isascii(c));
	c = ' ';
	printf("%i\n", ft_isascii(c));
}*/
