/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:31:32 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/07 14:19:16 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
		((unsigned char *)str)[counter++] = c;
	return (str);
}
/*
int main(void)
{
        char c[] = "atao";

        printf("%s", (char *)ft_memset(c, '.', 2));
}
*/
