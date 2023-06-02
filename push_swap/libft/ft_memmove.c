/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:19:18 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/09 11:19:19 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *str, const void *src, size_t n)
{
	if (!str && !src)
		return (0);
	if (src < str)
	{
		while (n != 0)
		{
			n--;
			((char *)str)[n] = ((char *)src)[n];
		}
	}
	else if (src > str)
		ft_memcpy(str, src, n);
	return (str);
}
