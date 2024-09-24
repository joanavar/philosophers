/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:26:36 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/10 17:38:20 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char caracter;

// 	caracter = ' ';
// 	if (ft_isprint(caracter))
// 		printf("%c es un caracter printable.\n", caracter);
// 	else
// 		printf("%c no es un caracter printable.\n", caracter);
// 	return (0);
// }