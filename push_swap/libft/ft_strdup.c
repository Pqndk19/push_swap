/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:46:30 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/10 15:46:32 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		c;

	c = 0;
	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (0);
	while (s[c] != '\0')
	{
		new[c] = s[c];
		c++;
	}
	new[c] = '\0';
	return (new);
}

/*int	main()
{
	char	h[] = "kykjcg";
	char	*ptr;

	ptr = ft_strdup(h);
	printf("%s\n", ptr);
}*/