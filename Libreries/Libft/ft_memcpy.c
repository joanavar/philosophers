/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:54:03 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/24 17:36:14 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*posrc;
	char	*d;

	d = (char *)dst;
	i = 0;
	posrc = (char *)src;
	if (!(d || posrc) || !n)
		return (dst);
	while (i < n)
	{
		d[i] = posrc[i];
		i++;
	}
	return (d);
}

/*
int main()
{
	const char src[] = "HolaKLGNKLDNGLKFDBNLKNLD";
	char dst[50];

	printf("El contenido el dst sera: %s\n", ft_memcpy(dst, src, 21));
	printf("El contenido el dst sera: %s\n", memcpy(dst, src, 21));
	return (0);
}
*/
