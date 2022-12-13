/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:49:21 by goda-sil          #+#    #+#             */
/*   Updated: 2022/12/01 11:13:13 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temporary;
	int		counter;

	counter = 0;
	temporary = (char *)s;
	while (s[counter] != c)
	{
		if (s[counter] == '\0')
			return (NULL);
		temporary++;
		counter++;
	}
	return (temporary);
}
