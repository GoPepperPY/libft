/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:55:46 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/08 14:00:49 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	lenght;

	counter = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	if (size == 0)
		return (lenght);
	while (src[counter] != '\0' && counter < (size - 1))
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (lenght);
}
/*
int		main()
{
	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("\n%ld\n", ft_strlcpy(d, c, -55));
	printf("%s\n", d);

	return (0);
}*/
