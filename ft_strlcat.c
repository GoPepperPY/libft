/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:41 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/29 15:16:56 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter_one;
	size_t	counter_two;
	size_t	destiny_lenght;
	size_t	source_lenght;

	counter_one = 0;
	if (size == 0)
		return (ft_strlen(src));
	destiny_lenght = ft_strlen(dst);
	source_lenght = ft_strlen(src);
	counter_two = destiny_lenght;
	if (size <= destiny_lenght)
		return (source_lenght + size);
	while (src[counter_one] != '\0' && counter_one < size - destiny_lenght - 1)
		dst[counter_two++] = src[counter_one++];
	dst[counter_two] = '\0';
	return (source_lenght + destiny_lenght);
}
/*
int		main()
{
	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("\n%zu\n", ft_strlcat(d, c, 22));
	printf("%s\n", d);

	return (0);
}*/
