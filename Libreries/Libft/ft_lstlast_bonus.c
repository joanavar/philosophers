/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:26:31 by joanavar          #+#    #+#             */
/*   Updated: 2024/01/29 21:47:34 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// '\0' = 48 1
// NULL = (void *)0;
//
/*t_list	*create_lst(void)
{
	t_list *new;
	int i = 0;

	while (i < 5)
	{
		if (i == 4)
			new = ft_lstnew((void *)"hola foo\n");
		else
			new = ft_lstnew((void *)"Queso\n");
		i++;
	}
	return (new);
}
int main(void) 
{
	t_list *foo;

	foo = create_lst();
	printf ("%s", ft_lstlast(foo)->content);
	return (EXIT_SUCCESS);
}*/
