/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:13:19 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/30 15:53:39 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(src);
	if (dstsize == 0)
		return (n);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

// int main()
// {
//     char dst[5] = "Hola";
//     const char *src = "Buenasquetal";
//     size_t len = 8;
//     size_t result = 0;
//     // size_t result_2 = 0;

//     printf("dst before strlcpy: %s\n", dst);
//     printf("src before strlcpy: %s\n", src);

//     result = ft_strlcpy(dst, src, len);
//     printf("\n\ndst after strlcpy: %s\n", dst);
//     printf("src after strlcpy: %s\n", src);
//     printf("valor que devuelve la funcion: %zu\n", result);

//     ///////////////////////////////////////////////strlcpy original

//     // printf("dst before strlcpy: %s\n", dst);
//     // printf("src before strlcpy: %s\n", src);

//     // result_2 = strlcpy(dst, src, len);
//     // printf("\n\ndst after strlcpy: %s\n", dst);
//     // printf("src after strlcpy: %s\n", src);
//     // printf("valor que devuelve la funcion: %zu\n", result);
//     // return (0);
// }
