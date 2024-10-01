/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:03:33 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/01 18:50:58 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*dinner_simulation(void *data)
{
	t_philo *philo;

	philo = (philo*)data;
	wait_all_threads(philo->table)//PREGUNTAR
	
	while (!simulations_finished(philo->table))
	{
		if (philo->full_c)
			break;
		eat(philo)// falta hacer
		write_status(SLEEPING, philo, philo->table);
		precise_usleep(philo->table->time_to_sleep, philo->table);
	}
	
}

void	dinner_start(t_table *table)
{
	int i;

	i = -1;
	if (0 == table->nbr->limits->meals)
		return ;
	else if (1 == table->philo_nbr)
		;// funcion para un solo philosofo;
	else
	{
		while (++i < table->philo_nbr)
		{
			safe_thread_handle(&table->philos[i].thread_id, 
				dinner_simulation, &table->philos[i], CREATE);
		}

	}
	table->start_simulation = gettime(MILLISECOND);
	set_bool(&table->table_mutex, &table->all_threads_ready, true);
}
