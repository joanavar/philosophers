/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:04:31 by joanavar          #+#    #+#             */
/*   Updated: 2024/02/08 18:23:26 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (str[i] && count != -1)
	{
		if (str[i] == '%')
		{
			if (dif_letter(str[i + 1], ap, &count) == -1)
				return (-1);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		if (str[i])
			i++;
	}
	va_end(ap);
	return (count);
}

/*int main (void)
{
	printf("------> nuestro: %d\n", ft_printf("%d", 10));

	printf ("-----> original: %d\n", printf("%d", 10));
	return (0);
}*/

/*
int	main(void)
{
	int	count;

	count = 0;
	if (ft_putstr("Hola dani", &count) == printf("Hola dani"))
		printf ("OK\n");
	else
		printf("KO\n");
	ft_putstr(NULL, &count);
	printf ("\n%p\n", 255);
	ft_printf("hola%%%s que edad tienes en int %p y en hexa %X\n", "joan", 21,
		21  );
//	ft_printf("%u\n", -6353);
//	printf("%u\n", -6353);
//	ft_printf("%u\n", -2147483649);
//	printf("%u\n", -2147483649);
	return (0);
}
*/
