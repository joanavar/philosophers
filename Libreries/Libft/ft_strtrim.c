/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:02:20 by joanavar          #+#    #+#             */
/*   Updated: 2024/08/08 14:11:04 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	j;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, 0, j + 1));
}

int main() 
{
 	 char s1[] = "         ";
 	 char *result = ft_strtrim(s1, " ");
	 printf("Mi nueva cadena es: %s\n", result);
	 return (0);
}
