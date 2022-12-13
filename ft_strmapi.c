/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:17:41 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/23 13:54:04 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*str;

	counter = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[counter] != '\0')
	{
		str[counter] = f(counter, s[counter]);
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

/* char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	if (str == '.')
		return (str);
	return (str - 32);
	}
int	main(void)
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
} */
