/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:41:42 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/29 12:10:36 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temporary;

	if (!new)
		return ;
	temporary = ft_lstlast(*lst);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temporary->next = new;
}
/*
void	ft_putstr(char *s)
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
	t_list	*new;
	list = ft_lstnew("feijoada / ");
	str0 = ft_lstnew("presunto / ");
	str1 = ft_lstnew("carne.");
	new = ft_lstnew(" coisa linda!");
	list->next = str0;
	str0->next = str1;
	printf("%s\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_back(&list, new);
	printf("%s\n", "ft_lstadd_back: ");
	print_list(list);
	return(0);
}
*/
