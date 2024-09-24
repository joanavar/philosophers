/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:22:04 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/22 20:40:07 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char caracter;

// 	caracter = 'a';
// 	if (ft_isalpha(caracter))
// 		printf("%c es una letra.\n", caracter);
// 	else
// 		printf("%c no es una letra.\n", caracter);
// 	return (0);
// }
