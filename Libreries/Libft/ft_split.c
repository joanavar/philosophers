/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:16:19 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/30 16:50:25 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// "hola     que tal" -> 3
// " hola     que tal" -> 3
// "hola     que tal " -> 3
// "         " -> 0
// "" -> 0
static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			word_count++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

static char	**free_matrix(char **matrix, int num_col)
{
	while (num_col >= 1)
	{
		num_col--;
		free(matrix[num_col]);
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		j;
	int		letter_count;
	int		k;

	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	matrix = ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (j < count_words(s, c))
	{
		letter_count = 0;
		while (s[k] == c)
			k++;
		while (s[k + letter_count] != '\0' && s[k + letter_count] != c)
			letter_count++;
		matrix[j] = ft_substr(s, k, letter_count);
		if (matrix[j++] == NULL)
			return (free_matrix(matrix, j - 1));
		k = k + letter_count;
	}
	return (matrix);
}

//  int main()
//  {
//      const char *s = "hola       HHHHHHHHHHHHHHHH!";
//      char c = ' ';
//      int i = 0;
//      printf("Entrando\n");
//      char **result = ft_split(s, c);
//      while (result[i] != NULL)
//      {
// 			printf("vueltas de i => %d\n", i);
//          printf("Mi string es: %s\n", result[i]);
//          free(result[i]);
//          i++;
//      }
//      free(result);
//      return (0);
//  }
