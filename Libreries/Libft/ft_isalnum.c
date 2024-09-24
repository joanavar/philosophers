/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:09:05 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:28:59 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

//#include <ctype.h>

// int main()
// {
// 	char caracter;

// 	caracter = 'Z';

// 	if (ft_isalnum(caracter))
// 		printf("%c es un alfanumerico.\n", caracter);
// 	else
// 		printf("%c no es un alfanumerico.\n", caracter);

// 	if (isalnum(caracter))
// 		printf("%c es un alfanumerico.\n", caracter);
// 	else
// 		printf("%c no es un alfanumerico.\n", caracter);
// 	return (0);
// }
