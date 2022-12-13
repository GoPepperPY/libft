/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:38:47 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/28 17:22:15 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*temporary;

	counter = 0;
	if (!lst)
		return (0);
	temporary = lst;
	while (temporary)
	{
		temporary = temporary -> next;
		counter++;
	}
	return (counter);
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
	list = ft_lstnew("feijao / ");
	str0 = ft_lstnew("cebola / ");
	str1 = ft_lstnew("beterraba.");
	list->next = str0;
	str0->next = str1;
	printf("%s\n\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	printf("%s", "ft_lstsize = ");
	printf("%d\n", ft_lstsize(list));
	return(0);
}
*/
