/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:54:46 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/28 15:35:30 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*variable;

	variable = malloc(sizeof(t_list));
	if (!variable)
		return (NULL);
	if (variable)
	{
		variable -> content = content;
		variable -> next = NULL;
	}
	return (variable);
}
/*
int	main(void)
{
	char	str[] = "42porto";
	t_list	*str2;
	printf("str = ");
	printf("%s\n", str);
	str2 = ft_lstnew((void *)str);
	printf("ft_lstnew((void *)str) = ");
	printf("%s\n", (char *)str2->content);
	return (0);
}
*/
