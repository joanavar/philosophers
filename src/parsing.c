/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:12:24 by joanavar          #+#    #+#             */
/*   Updated: 2024/09/20 16:05:31 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "philo.h"

static int is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static const char	*valid_input(const char *s)
{
	int len;
	int	i;
	const char	*nbr;

	i = 0;
	len = 0;
	while (is_space(s[i]))
		i++;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
		error_exit("Error is argv negative");
	if (!is_digit(s[i]))
		error_exit("Error isn't digit");
	nbr = s + i;//s + i == &s[i]
	while (is_digit(s[i++]))
		++len;
	if (len > 10)
		error_exit("Error INT_MAX");
	return(nbr);
}

static long	ft_atol(const char *s)
{
	long nbr;
	int i;

	i = 0;
	nbr = 0;
	s = valid_input(s);
	while(is_digit(s[i]))
		nbr = (nbr * 10) + (s[i++] - '0');
	if (nbr > INT_MAX)
		error_exit("Error INT_MAX");
	return (nbr);
}

void	parse_imput(t_table *table, char **argv)
{
	table->philo_nbr = ft_atol(argv[1]);
	table->time_to_die = ft_atol(argv[2]) * 1e3;
	table->time_to_eat = ft_atol(argv[3]) * 1e3;
	table->time_to_sleep = ft_atol(argv[4]) * 1e3;
	if (table->time_to_die < 6e4
		|| table->time_to_eat < 6e4
		|| table->time_to_sleep < 6e4)
		error_exit("Error < 60ms");
	if (argv[5])
		table->nbr_limits_meals = ft_atol(argv[5]);
	else
		table->nbr_limits_meals = -1;
}
