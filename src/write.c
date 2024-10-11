/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:33:52 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/11 10:36:04 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	write_status(t_philo_status status, t_philo *philo)
{
	long elapsed;

	elapsed = gettime(MILLISECOND) - philo->table->start_simulation;
	if (philo->full_c)
		return ;
	safe_mutex_handle(&philo->table->write_mutex, LOCK);

		if ((TAKE_FIRST_FORK == status || TAKE_SECOND_FORK == status) 
				&& !simulation_finished(philo->table))
			printf("%-6ld  %d has taken a fork\n", elapsed, philo->id);
		else if (EATING == status && !simulation_finished(philo->table))
			printf("%-6ld  %d is eating\n", elapsed, philo->id);
		else if (SLEEPING == status && !simulation_finished(philo->table))
			printf("%-6ld  %d is sleeping\n", elapsed, philo->id);
		else if (THINKING == status && !simulation_finished(philo->table))
			printf("%-6ld  %d is thinking\n", elapsed, philo->id);
		else if (DIE == status && !simulation_finished(philo->table))
			printf("%-6ld  %d died\n", elapsed, philo->id);	
	safe_mutex_handle(&philo->table->write_mutex, UNLOCK);
}

