/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:33:51 by goda-sil          #+#    #+#             */
/*   Updated: 2022/12/01 16:51:00 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				counter;
	unsigned char		*destiny;
	unsigned char		*source;

	if (!dest && !src)
		return (NULL);
	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	counter = 0;
	if (destiny > source)
	{
		while (n--)
			destiny[n] = source[n];
	}
	else
	{
		while (counter < n)
		{
			destiny[counter] = source[counter];
			counter++;
		}
	}
	return (destiny);
}
/*
int main(void)
{
        char c[] = "lucas";
        char y[] = "WXYZ";
        printf("%s\n", (char *)ft_memmove(y, c, 6));
}
*/
