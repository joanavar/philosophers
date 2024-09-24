/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:20:06 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/30 16:18:18 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
void	mapper(unsigned int n, char *s)
{
	printf("mira %d y %s\n", n, s);
}

int	main(void)
{
	char	*s;

	s = "Hola";
	ft_striteri(s, mapper);
	return (0);
}
*/
