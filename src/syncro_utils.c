#include "philo.h"

void    wait_all_threads(t_table *table)
{
    while (!get_bool(&table->table_mutex, &table->all_trheads_ready))
    {
        /* code */
    }
    
}
