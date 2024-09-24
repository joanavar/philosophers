/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:31:51 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/26 18:42:45 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (0 == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int main()
{
    const char *str = NULL;
    int c = 'Z';
    char *result = ft_strchr(str, c);
	char *result_2 = strchr(str, c);

    if (result != NULL)
        printf("Caracter encontrado en la posicion: %ld\n", result - str);
    else
        printf("Caracter no encontrado en la cadena.\n");

	if (result_2 != NULL)
        printf("Caracter encontrado en la posicion: %ld\n", result - str);
    else
        printf("Caracter no encontrado en la cadena.\n");
    return (0);
}
*/