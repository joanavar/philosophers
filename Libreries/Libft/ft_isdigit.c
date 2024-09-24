/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:50:16 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/11 19:15:03 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>			
// int main()
// {
// 	char caracter;

// 	caracter = '8';
// 	if (ft_isdigit(caracter))
// 		printf("%c es un digito.\n", caracter);
// 	else
// 		printf("%c no es un digito.\n", caracter);
// 	return (0);
// }
