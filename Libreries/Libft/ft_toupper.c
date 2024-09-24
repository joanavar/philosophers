/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:58:54 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/17 22:47:06 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

// int main()
// {
//     char letter_a = 'c';
//     char letter_A = ft_toupper(letter_a);

//     printf("La letra cuando era minuscula: %c\n", letter_a);
//     printf("La letra ahora mayuscula: %c\n", letter_A);
//     return (0);
// }
