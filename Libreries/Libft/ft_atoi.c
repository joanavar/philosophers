/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:54:58 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:25:46 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	sig;

	sig = 1;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = -sig;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (sig * number);
}

// int main()
// {
// 	const char *str;
// 	int number;
// 	int number_2;
// 	str = "21474836499999999999999  999";
// 	number = ft_atoi(str);
// 	number_2 = atoi(str);
// 	printf("El resultado es: %d\n", number);
// 	printf("El resultado es: %d\n", number_2);
// 	return (0);
// }
