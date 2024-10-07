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
typedef struct s_table	t_table;

typedef enum e_status
{
	EATING,
	SLEEPING,
	THINKING,
	TAKE_FIRST_FORK,
	TAKE_SECOND_FORK,
	DIE,
}			t_philo_status;

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

typedef enum e_time_code
{
	SECOND,
	MILLISECOND,
	MICROSECOND,
}			t_time_code;

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
	t_mtx		philo_mutex;
}				t_philo;	

struct s_table
{
	long	philo_nbr;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	nbr_limits_meals;
	long	start_simulation;
	bool	end_simulation;// full_meals or die philo
	bool	all_threads_ready;
	long		threads_running_nbr;
	pthread_t	monitor;
	t_mtx	table_mutex;
	t_mtx	write_mutex;
	t_fork	*forks;// arrany forks
	t_philo	*philos;// arrany philos

};






//parsing.c
void	parse_imput(t_table *table, char **argv);

//utils.c
void	error_exit();
long	gettime(t_time_code time_code);
void	precise_usleep(long usec, t_table *table);

//safe.c
void	*safe_malloc(size_t bytes);
void	safe_mutex_handle(t_mtx *mutex, t_opcode opcode);
void	safe_thread_handle(pthread_t *thread, void *(foo)(void *),
		 void *data, t_opcode opcode);

//data.init.c
void	data_init(t_table *table);

//setters_getters.c
void	set_bool(t_mtx *mutex, bool *dst, bool value);
bool	get_bool(t_mtx *mutex, bool *value);
void	set_long(t_mtx *mutex, long *dst, long value);
long	get_long(t_mtx *mutex, long *value);
bool	simulation_finished(t_table *table);

//syncro.utils.c
void    wait_all_threads(t_table *table);
bool    all_threads_running(t_mtx *mutex, long *threads, long philo_nbr);
void    increase_long(t_mtx *mutex, long *value);

//write.c
void	wrtie_status(t_philo_status status, t_philo *philo);


#endif // DEBUG
