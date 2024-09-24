/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:10:14 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/15 21:09:50 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;
	int		i;

	i = 0;
	len = ft_strlen(s1) + 1;
	dst = malloc(sizeof(char) * len);
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	const char	*str = "Patata";
	char		*result;
	char		*result_2;

	result = ft_strdup(str);
	result_2 = strdup(str);
	printf("el contenido de dst es: %s\n",result);
	printf("el contenido que me da la funcion real es : %s\n", result_2);
	return (0);
}
*/
