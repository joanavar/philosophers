/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:42:42 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/24 16:51:41 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!needle[i] || (haystack == NULL && len == 0))
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (!needle[n + 1])
				return ((char *)&haystack[i]);
			n++;
		}
		n = 0;
		i++;
	}
	return (NULL);
}

/*
int main()
{
    const char *str = NULL;
    const char *substr = NULL;
    size_t len = 10;
    char *result = ft_strnstr(str, substr, len);
	char *result_2 = strnstr(str, substr, len);

    if (result != NULL)
	printf("la subcadena se ha encontrado en la posicion: %ld\n", result - str);
    else
        printf("No se ha encontrado la subcadena en esta cadena.\n");

	if (result_2 != NULL)
	printf("la subcadena se ha encontrado en la posicion: %ld\n", 
		result_2 - str);
    else
        printf("No se ha encontrado la subcadena en esta cadena.\n");
    return (0);
}
*/