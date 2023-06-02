/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:36:07 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/08 10:36:10 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (src_size + size);
	while (dest_size < (size - 1) && src[i] != '\0')
	{
		dest[dest_size] = src[i];
		i++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (src_size + ft_strlen(dest) - i);
}

/*int main()
{
	char dest[100] = "hello";
	char src[100] = " nicolee";
	int k;

	printf("Before:\n	Src:%s\n	Dest:%s\n	Size:n/a\n\n",src ,dest);
	k = ft_strlcat(dest, src, 8);
	printf("After:\n	Src:%s\n	Dest:%s\n	Size:%i\n\n",src ,dest, k);
}*/