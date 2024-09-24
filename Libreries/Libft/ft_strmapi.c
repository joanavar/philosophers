/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:41:11 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/30 15:50:34 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		lens;

	i = 0;
	lens = ft_strlen(s);
	str = malloc(sizeof(char) * lens + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char mapper (unsigned int n, char a)
// {
//     return (a + 3);
// }

// int main()
// {
//     const char *s = "Hola";
//     char *result = ft_strmapi(s, mapper);
//     printf("Mi mensaje cifrado es: %s\n", result);
//     return (0);
// }
