/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:16:10 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 15:16:50 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(int n)
{
	size_t	digits;

	digits = 1;
	if (n < 0)
		digits++;
	while (n / 10 != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	char	*str;

	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	digits = count_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	digits--;
	if (n < 0)
	{
		str[0] = '-';
		n = -1 * n;
	}
	if (n == 0)
		str[digits] = 0 + '0';
	while (n != 0)
	{
		str[digits] = n % 10 + '0';
		n = n / 10;
		digits--;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc,char *argv[])
{
	char *str;

	(void)argc;
	str = ft_itoa(ft_atoi(argv[1]));
	printf("%s", str);
	return (0);
}
