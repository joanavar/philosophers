/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:59:21 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/23 18:33:06 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	const char	*s;
	char		*d;

	s = (const char *)src;
	d = (char *)dst;
	if (d > s)
	{
		i = len - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
int	main(void)
{
	char	string[] = "Holacomoestas?";
	char	dst[10];

	printf("Contenido del string despues del memmove: %s\n", ft_memmove(dst ,
			string , 20));
	printf("Contenido del string despues del memmove: %s\n", memmove(dst ,
			string , 20));
	return (0);
}
*/
