/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:14:08 by joanavar          #+#    #+#             */
/*   Updated: 2024/02/08 18:23:45 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c, int *count);
int	ft_putstr(char *str, int *count);
int	ft_putnbr_base(long int n, int *count, int base, char flag);
int	ft_putnbr_ptr(unsigned long n, int *count, unsigned long base, char flag);
int	dif_letter(char dif, va_list ap, int *count);
int	ft_printf(const char *str, ...);

#endif
