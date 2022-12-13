/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:46:06 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/29 15:17:51 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter_one;
	size_t	counter_two;

	counter_one = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[counter_one] && counter_one < len)
	{
		counter_two = 0;
		while (big[counter_one + counter_two]
			&& big[counter_one + counter_two] == little[counter_two]
			&& (counter_one + counter_two) < len && little[counter_two])
		{
			if (little[counter_two + 1] == '\0')
				return ((char *)&(big[counter_one]));
			counter_two++;
		}
		counter_one++;
	}
	return (0);
}
/*int		main()
{
	char c[] = "Ola, quem mesmo fala? Não seai. Quem não mesmo sei. Não sei mesmo.";
	char d[] = "q";

//	printf("\n%s", strnstr(big, little, 1));
	printf("\n%s\n", ft_strnstr(c, d, 1));

//	printf("\n%s", strnstr(big, little, -100));
	printf("\n%s\n", ft_strnstr(c, d, -100));

//	printf("\n%s", strnstr(big, little, 0));
	printf("\n%s\n", ft_strnstr(c, d, 0));

//	printf("\n%s", strnstr(big, little, -2));
	printf("\n%s\n", ft_strnstr(c, d, -2));

//	printf("\n%s", strnstr(big, little, 10));
	printf("\n%s\n", ft_strnstr(c, d, 10));

//	printf("\n%s", strnstr(big, little, 11));
	printf("\n%s\n", ft_strnstr(c, d, 11));

//	printf("\n%s", strnstr(big, little, 12));
	printf("\n%s\n", ft_strnstr(c, d, 12));

//	printf("\n%s", strnstr(big, little, 13));
	printf("\n%s\n", ft_strnstr(c, d, 13));

//	printf("\n%s", strnstr(big, little, 14));
	printf("\n%s\n", ft_strnstr(c, d, 14));

//	printf("\n%s", strnstr(big, little, 15));
	printf("\n%s\n", ft_strnstr(c, d, 15));

//	printf("\n%s", strnstr(big, little, 100));
	printf("\n%s\n", ft_strnstr(c, d, 100));

	return (0);
}*/
