/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:53:39 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:30:20 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	counter(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = counter(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (count-- != 0 && n != 0)
	{
		str[count] = putnbr(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int main(void)
{
	int n = -123;
	char *result = ft_itoa(n);
	printf("Nuestra str es: %s\n", result);
	return (0);
}*/
