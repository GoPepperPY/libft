/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:40:09 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/29 11:40:47 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temporary;

	if (!lst)
		return (NULL);
	temporary = lst;
	while (temporary->next != NULL)
		temporary = temporary->next;
	return (temporary);
}

/* void	ft_putstr(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;
	t_list	*last;
	list = ft_lstnew("vinagre / ");
	str0 = ft_lstnew("ketchup / ");
	str1 = ft_lstnew("leticia.");
	list->next = str0;
	str0->next = str1;
	printf("%s\n\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	printf("%s", "ft_lstlast = ");
	last = ft_lstlast(list);
	printf("%s\n", (char *)(last->content));
	return(0);
} */
