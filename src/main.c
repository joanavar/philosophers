/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:12:27 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/09 16:57:35 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char **argv)
{
	t_table	*table;

	if (argc == 5 || argc == 6)
	{
		table = malloc(sizeof(table));
		parse_imput(table, argv);
		data_init(table);
	}
	else 
	{
		error_exit("Error");
	}
return (0);
}
