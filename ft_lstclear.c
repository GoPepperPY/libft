/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:29:53 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/29 14:46:02 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temporary;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temporary = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temporary;
	}
	*lst = NULL;
}
