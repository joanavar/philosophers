/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:04:04 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/15 18:51:25 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int main()
{
	char *str;
	int i;
	int j;

	str = "l;brklbnklfdnklbnkldndklfnbkln dbfjkbndklnbdlk";
	i = ft_strlen(str);
	j = strlen(str);
	printf("La longitud de la cadena es %d\n", i);
	printf("La longitud de la cadena es %d\n", j);

	return (0);
}
*/
