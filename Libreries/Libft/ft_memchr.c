/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:50:00 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:50:31 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*o;

	i = 0;
	o = (unsigned char *)s;
	while (i < n)
	{
		if (o[i] == (unsigned char)c)
			return (&o[i]);
		i ++;
	}
	return (NULL);
}

/*
int main()
{
	const void *s = "Hola me llamo";
	int c = 'a';
	size_t n = 7;
	void *result = ft_memchr(s, c, n);
	void *result_2 = memchr(s, c, n);

	if (result != NULL)
	{
		printf("El byte se encuentra en la posicion: %ld\n", result - s);
	}
	else
		printf("El byte no se encontro.\n");
	if (result_2 != NULL)
	{
		printf("El byte se encuentra en la posicion: %ld\n", result_2 - s);
	}
	else
		printf("El byte no se encontro.\n");
	return (0);
}
*/
