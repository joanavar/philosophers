/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:53 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/24 21:49:23 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)&s[i]);
	while (i != 0)
	{
		if (s[i - 1] == (char)c)
		{
			return ((char *)&s[i - 1]);
		}
		else
			i--;
	}
	return (NULL);
}

/*
int main()
{
	const char *str = "anna t eq ui e ro";
	int c = ' ';
	char *result = ft_strrchr(str, c);
	char *result_2 = ft_strrchr(str, c);

	if (result != NULL)
		printf("El ultimo caracter especifico esta en la posicion : 
			%ld\n", result - str);
	else
		printf("No se ha encontrado el caracter\n");

	if (result_2 != NULL)
		printf("El ultimo caracter especifico esta en la posicion : 
			%ld\n", result_2 - str);
	else
		printf("No se ha encontrado el caracter\n");
	return (0);
}
*/