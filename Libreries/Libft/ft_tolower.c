/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:19:46 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/15 19:32:26 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/*
#include <ctype.h>
int main()
{
	char letter_A = 'J';
	char letter_a = ft_tolower(letter_A);
	char letter_B = 'Z';
	char letter_b = tolower(letter_B);

	printf("La letra cuando era mayuscula: %c\n", letter_A);
	printf("La letra ahora minuscula: %c\n", letter_a);
	printf("La letra cuando era mayuscula: %c\n", letter_B);
	printf("La letra ahora minuscula: %c\n", letter_b);
	return (0);
}
*/