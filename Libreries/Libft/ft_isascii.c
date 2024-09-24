/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:16:25 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/10 17:37:48 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
	char caracter;

	caracter = '%';
	if (ft_isascii(caracter))
		printf("%c es un valor ASCII valido.\n", caracter);
	else
		printf("%c no es un valor ASCII valido.\n", caracter);
	return (0);
}*/
