/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:37:04 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/02 16:38:15 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(char c)
{
	if (((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		&& (c < '0' || c > '9'))
	{
		return (0);
	}
	else
		return (1);
}

/*int	main()
{
	char	c;
	
	c = '8';
	printf("%i\n", ft_isalnum(c));
	c = 'f';
	printf("%i\n", ft_isalnum(c));
	c = '*';
	printf("%i\n", ft_isalnum(c));
}*/
