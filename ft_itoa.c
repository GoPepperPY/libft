/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:03:10 by goda-sil          #+#    #+#             */
/*   Updated: 2022/11/23 13:54:49 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_digit_count(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr <= 0)
		counter++;
	while (nbr != 0)
	{
		counter++;
		nbr /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		counter;

	counter = ft_digit_count(n);
	string = malloc(sizeof(char) * (counter + 1));
	if (!string)
		return (NULL);
	string[counter--] = '\0';
	if (n < 0)
		string[0] = '-';
	else if (n == 0)
		string[0] = 48;
	while (n != 0)
	{
		string[counter--] = absolute_value(n % 10) + '0';
		n /= 10;
	}
	return (string);
}
/*
int main()
{
	int test_1 = 132454;
	int test_2 = 0;
	int test_3 = 9875;
	int test_4 = 35476;
	int test_5 = -65541;
	int test_6 = -546546;
	int test_7 = -213;
	int test_8 = 21312;
	int test_9 = 1;
	int test_0 = -6886;

	printf("%s\n", ft_itoa(test_0));
	printf("%s\n", ft_itoa(test_1));
	printf("%s\n", ft_itoa(test_2));
	printf("%s\n", ft_itoa(test_3));
	printf("%s\n", ft_itoa(test_4));
	printf("%s\n", ft_itoa(test_5));
	printf("%s\n", ft_itoa(test_6));
	printf("%s\n", ft_itoa(test_7));
	printf("%s\n", ft_itoa(test_8));
	printf("%s\n", ft_itoa(test_9));
}
*/
