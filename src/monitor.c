#include "philo.h"


static bool philo_died(t_philo *philo)
{
    long    elapsed;
    long    t_to_die;

    if (get_bool(&philo->philo_mutex, &philo->full_c))
        return (false)
    elapsed = gettime(MILLISECOND) - get_long(&philo->philo_mutex, &philo->last_meal_time);
    t_to_die = philo->table->time_to_die//Tengo que volver a convertir en milisegundos;
    if (elapsed > t_to_die)
        return (true);
    return (false);
}



void    *monitor_dinner(void *data)
{
    t_table *table;

    table = (table*)data;
    while (!all_threads_running(&table->table_mutex, table->threads_running_nbr, 
        table->philo_nbr))
        ;
    while (!simulation_finished(table))
    {
        i = -1;
        while (++i < table->philo_nbr)
        {
            if (philo_died(table->philos + i))
            {
                set_bool(&table->table_mutex, table->end_simulation, TRUE);
                wrtie_status(DIED, table->philos + i);
            }
        }
    }
}