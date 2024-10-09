/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:03:33 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/09 16:54:03 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


static	void thinking(t_philo *philo)
{
	write_status(THINKING, philo);
}

void	*lone_philo(void *arg)
{
	t_philo *philo;

	philo = (t_philo*)arg;
	wait_all_threads(philo->table);
	set_long(&philo->philo_mutex, &philo->last_meal_time, gettime(MILLISECOND));
	increase_long(&philo->table->table_mutex, &philo->table->threads_running_nbr);
	write_status(TAKE_FIRST_FORK, philo);
	while (!simulation_finished(philo->table))
		usleep(200);
	return (NULL);

}

static	void eat(t_philo *philo)
{
	safe_mutex_handle(&philo->first_fork->fork, LOCK);
	write_status(TAKE_FIRST_FORK, philo);
	safe_mutex_handle(&philo->second_fork->fork, LOCK);
	write_status(TAKE_SECOND_FORK, philo);
	set_long(&philo->philo_mutex, &philo->last_meal_time, gettime(MILLISECOND));
	philo->meals_c++;
	write_status(EATING, philo);
	precise_usleep(philo->table->time_to_eat, philo->table);
	if (philo->table->nbr_limits_meals > 0 && 
			philo->table->nbr_limits_meals == philo->meals_c)
		set_bool(&philo->philo_mutex, &philo->full_c, true);
	safe_mutex_handle(&philo->first_fork->fork, UNLOCK);
	safe_mutex_handle(&philo->second_fork->fork, UNLOCK);

}

void	*dinner_simulation(void *data)
{
	t_philo *philo;

	philo = (t_philo*)data;
	wait_all_threads(philo->table);//PREGUNTAR
	set_long(&philo->philo_mutex, &philo->last_meal_time, 
		gettime(MILLISECOND));
	increase_long(&philo->table->table_mutex, 
		&philo->table->threads_running_nbr);
	
	while (!simulation_finished(philo->table))
	{
		if (philo->full_c)
			break;
		eat(philo);// falta hacer
		write_status(SLEEPING, philo);
		precise_usleep(philo->table->time_to_sleep, philo->table);
		thinking(philo);
	}
	return (NULL);
}

void	dinner_start(t_table *table)
{
	int i;

	i = -1;
	if (0 == table->nbr_limits_meals)
		return ;
	else if (1 == table->philo_nbr)
		safe_thread_handle(&table->philos[0].thread_id, lone_philo, 
			&table->philos[0], CREATE);
	else
	{
		while (++i < table->philo_nbr)
		{
			safe_thread_handle(&table->philos[i].thread_id, 
				dinner_simulation, &table->philos[i], CREATE);
		}

	}
	safe_thread_handle(&table->monitor, monitor_dinner, table, CREATE);
	table->start_simulation = gettime(MILLISECOND);
	set_bool(&table->table_mutex, &table->all_threads_ready, true);
}
