/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:07:06 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/15 16:44:16 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main()
// {
// 	char string[10];
// 	char string_2[10];

// 	ft_bzero(string, 5);
// 	bzero(string, 5);
// 	printf("La cadena despues de bzero: %s\n", string);
// 		printf("La cadena despues de bzero: %s\n", string_2);

// 	return (0);
// }
