#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>// printf
# include <stdlib.h>// malloc
# include <unistd.h>// write
# include <stdbool.h>// Boleanos
# include <pthread.h>// mutex
# include <sys/time.h>// gettimeofday
# include <limits.h>// INT_MAX AND INT_MIN
# include "../Libreries/Libft/libft.h"
# include "../Libreries/Printf/ft_printf.h"

typedef pthread_mutex_t t_mtx;

typedef enum e_opcode
{
	LOCK,
	UNLOCK,
	INIT,
	DESTROY,
	CREATE,
	JOIN,
	DETACH,
}			t_opcode;

typedef struct s_fork
{
	t_mtx	fork;
	int		fork_id;
	
}		t_fork;

typedef struct s_philo 
{
	int			id;
	long		meals_c;
	bool		full_c;
	long		last_meal_time;
	t_fork		*first_fork;
	t_fork		*second_fork;
	pthread_t	thread_id;
	t_table		*table;
}		t_philo;

typedef	struct s_table
{
	long	philo_nbr;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	nbr_limits_meals;
	long	start_simulation;
	bool	end_simulation;// full_meals or die philo
	bool	all_threads_ready;
	t_fork	*forks;// arrany forks
	t_philo	*philos;// arrany philos

}				t_table;






//parsing.c
void	parse_imput(t_table *table, char **argv);

//utils.c
void	error_exit();

//safe.c
void	*safe_malloc(size_t bytes);
void	safe_mutex_handle(t_mtx *mutex, t_opcode opcode);
void	safe_thread_handle(pthread_t *thread, void *(foo)(void *),
		 void *data, t_opcode opcode);

//data.init.c
void	data_init(t_table *table);


#endif // DEBUG
