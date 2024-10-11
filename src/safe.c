/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:57:52 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/11 11:16:09 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*safe_malloc(size_t bytes)
{
	void	*memory;

	memory = malloc(bytes);
	if (!memory)
		error_exit("Error with malloc");
	return (memory);
}

static void	handle_error_mutex(int status, t_opcode opcode)
{
	if (status == 0)
		return ;
	if (EINVAL == status && (LOCK == opcode || UNLOCK == opcode
			|| DESTROY == opcode))
		error_exit("the value specified by mutex is invalid");
	else if (EINVAL == status && INIT == opcode)
		error_exit("the value specified by attr is invalid");
	else if (EPERM == status)
		error_exit("the current thread does not hold a lock on mutex");
	else if (EDEADLK == status)
		error_exit("A deadlock would occur if the thread blocked waiting for mutex");
	else if (ENOMEM == status)
		error_exit("the procces cannot allocate enough memory to create another mutex");
	else if (EBUSY == status)
		error_exit("Mutex is locked");
}

void	safe_mutex_handle(t_mtx *mutex, t_opcode opcode)
{
	if (LOCK == opcode)
		handle_error_mutex(pthread_mutex_lock(mutex), opcode);
	else if (UNLOCK == opcode)
		handle_error_mutex(pthread_mutex_unlock(mutex), opcode);
	else if (INIT == opcode)
		handle_error_mutex(pthread_mutex_init(mutex, NULL), opcode);
	else if (DESTROY == opcode)
		handle_error_mutex(pthread_mutex_destroy(mutex), opcode);
	else
		error_exit("Error opcode");
}

static void	handle_thread_error(int status, t_opcode opcode)
{
	if (status == 0)
		return ;
	if (EINVAL == status && (JOIN == opcode || DETACH == opcode))
		error_exit("thread is not a joinable thread");
	else if (EDEADLK == status)
		error_exit("A deadlock was detected or the value of");
	else if (EINVAL == status && CREATE == opcode)
		error_exit("the value specified by attr is invalid");
	else if (ESRCH == status)
		error_exit("No thread with the ID thread could be found");
	else if (EPERM == status)
		error_exit("No permission");
	else if (EAGAIN == status)
		error_exit("Insufficient resources to create another");
	
	
}

void	safe_thread_handle(pthread_t *thread, void *(foo)(void *),
		void *data, t_opcode opcode)
{
	if (CREATE == opcode)
		handle_thread_error(pthread_create(thread, NULL, foo, data),
		 opcode);
	if (JOIN == opcode)
		handle_thread_error(pthread_join(*thread, NULL), opcode);
	if (DETACH == opcode)
		handle_thread_error(pthread_detach(*thread), opcode);
}



