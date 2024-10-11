/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:18:26 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/11 10:45:15 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/philo.h"

long	gettime(t_time_code time_code)
{
	struct	timeval	tv;

	if (gettimeofday(&tv, NULL))
		error_exit("gettimeofday failed");
	if (SECOND == time_code)
		return (tv.tv_sec + (tv.tv_usec / 1000000));
	else if (MILLISECOND == time_code)
		return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
	else if (MICROSECOND == time_code)
		return ((tv.tv_sec * 1000000) + (tv.tv_usec));
	else
		error_exit("Wrong input to gettime");
	return (1337);
}

void	precise_usleep(long usec, t_table *table)
{
	long	start;
	long	elapsed;
	long	rem;

	start = gettime(MICROSECOND);
	while (gettime(MICROSECOND) - start < usec)
	{
		if (simulation_finished(table))
			break;
		elapsed = gettime(MICROSECOND) - start;
		rem = usec - elapsed;
		if (rem > 1000)
			usleep(usec/2);
		else
			while (gettime(MICROSECOND) - start < usec)
				;

	}

}

void	error_exit(char *s)
{
	printf("%s", s);
	exit(EXIT_FAILURE);
}


