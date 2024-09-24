/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:05:17 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:27:43 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	size_total;
	char	*memory;
	size_t	i;

	i = 0;
	size_total = count * size;
	memory = malloc(size_total);
	if (memory != NULL)
	{
		while (i < size_total)
		{
			memory[i] = 0;
			i++;
		}
	}
	return ((void *)memory);
}

/*
int main(void)
{
    char    *ptr;
    char    *ptr2;
    int i = 0;
    
    ptr = ft_calloc(5,4);
    ptr2 = calloc(5,4);
    while (i < 23)
    {
        printf("%d: got: %c, expected: %c\n",i+1, (int)(ptr[i]) + '0'
			, (int)(ptr2[i]) + '0');
        i++;
    }
    return (0);
}
*/
