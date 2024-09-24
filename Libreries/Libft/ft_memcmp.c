/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:50:17 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/24 17:47:10 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s1_2;
	unsigned char		*s2_2;

	if (n == 0)
		return (0);
	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	i = 0;
	while (s1_2[i] == s2_2[i] && i < n - 1)
		i++;
	if (i == n)
		return (0);
	return (s1_2[i] - s2_2[i]);
}

/*
int main()
{
	const char *s1 = NULL;
	const char *s2 = NULL;
	size_t n = 10;
	const char pnt1[11] = {'h', 'i', 10, 0, 10, 'b', '0', 32, 12, -5,0};
	const char pnt2[11] = {'h', 'i', 10, 0, 10, 'b', '0', 32, 12, -5,0};
	int result = ft_memcmp(s1, s2, n);
	int result_2 = memcmp(s1, s2, n);
	if (result == 0)
		printf("Todos los caracteres pedidos de las cadenas son iguales.\n");
	else if (result > 0)
		printf("Los caracteres pedidos de s1 son mayores que los de s2.\n");
	else
		printf("Los caracteres pedidios de s2 son mayores que los de s1.\n");

	if (result_2 == 0)
		printf("Todos los caracteres pedidos de las cadenas son iguales.\n");
	else if (result_2 > 0)
		printf("Los caracteres pedidos de s1 son mayores que los de s2.\n");
	else
		printf("Los caracteres pedidios de s2 son mayores que los de s1.\n");
	

	return (0);
}
*/
