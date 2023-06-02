/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:22:40 by mmassa-r          #+#    #+#             */
/*   Updated: 2022/11/10 10:22:42 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (void *)malloc((nmemb * size));
	if (!ptr)
		return (0);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main()
{
	int i;
	char *ptr;
        ptr = ft_calloc(10, sizeof(char));
        if (ptr == NULL) {
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Building and calculating the sequence\
        sum of the first 10 terms \n ");
        for (i = 0; i < 10; ++i) 
        {
         	ptr[i] = 'a';
        }
        printf("Sum = %s\n", ptr);
        free(ptr);
        return 0;
}
*/
