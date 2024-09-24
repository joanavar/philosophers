/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:15:05 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/30 15:48:13 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lenchar;
	size_t	j;
	size_t	i;

	i = start;
	j = 0;
	if (!s || start > ft_strlen(s))
		return (ft_strdup(""));
	lenchar = ft_strlen(s);
	if (lenchar - start <= len)
		str = malloc((lenchar - start) + 1);
	else
		str = malloc(len + 1);
	if (str != NULL)
	{
		while (j < len && s[i] != '\0')
		{
			str[j] = s[i];
			i++;
			j++;
		}
		str[j] = '\0';
	}
	return (str);
}
/*
int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*result;

	s = "MellamoJose";
	start = 1;
	len = 14;
	result = ft_substr(s, start, len);
	printf("Nuestra str es: %s\n", result);
	return (0);
}

// ft_substr("holasanti", 4, 6); -> "asa"
*/
