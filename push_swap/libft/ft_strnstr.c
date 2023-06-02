/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:53:26 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/08 13:53:27 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!s || !n) && len == 0)
		return (0);
	if (n[0] == '\0')
		return ((char *)s);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (n[j] == s[i + j] && s[i + j] && n[j] && (j + i) < len)
		{
			if (n[j + 1] == '\0')
			{
				return ((char *)s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char	string[] = "umca cabra bateu no poste";
	char	needle[] = "c";

	printf("%s\n", ft_strnstr(string, needle, 3));
}*/