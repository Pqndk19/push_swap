/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:59:22 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/15 11:59:24 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	j;
	size_t	i;

	if (!s)
		return (0);
	j = 0;
	i = 0;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (0);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{	
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return ((char *)sub);
}
