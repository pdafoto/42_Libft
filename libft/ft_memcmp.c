/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:22:23 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 19:05:35 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	i = 0;
	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_char[i] != s2_char[i])
			return (s1_char[i] - s2_char[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	size;

	(void)argc;
	printf("1: %s\n2: %s\n", argv[1], argv[2]);
	printf("Introduce el número de caracteres a comparar: ");
	scanf("%u", &size);
	printf("1ª diferencia: %d\n", ft_memcmp(argv[1], argv[2], size));
	return (0);
}*/
