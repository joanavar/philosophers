/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:25:10 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/23 17:32:01 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*pos;

	i = 0;
	pos = b;
	while (i < len)
	{
		pos[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char string[20];
// 	char string_2[20];

// 	ft_memset(string, '%', 10);
// 	memset(string_2, '%', 10);
// 	printf("Cadena despues de ft_memset: %s\n", string);
// 	printf("Cadena despues de memset: %s\n", string_2);

// 	return (0);
// }
