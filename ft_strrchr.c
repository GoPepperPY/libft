/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:28:40 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/08 17:49:55 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == c)
		{
			last = ((char *)str);
		}
		str++;
	}
	return (last);
}
/*
int		main()
{
	char a[] = "Olua, quem faula?";
	char b = 'u';

	char c[] = "Olua, quem faula?";
	char d = 'u';

	printf("%s\n", strrchr(a, b));

	printf("\n%s\n", ft_strrchr(c, d));

	return (0);
}*/
