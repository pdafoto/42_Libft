/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:31:29 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 18:12:36 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_char;

	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == (unsigned char)c)
			return ((void *)&s_char[i]);
		else
		{
			i++;
			s++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	c;
	size_t	n;

	(void)argc;
	printf("%s\n", argv[1]);
	printf("Introduce el caracter a buscar: ");
	scanf(" %c", &c);
	printf("Introduce el número de bytes a analizar: ");
	scanf(" %zu", &n);
	printf("1ª coincidencia: %s\n", ft_memchr(argv[1], c, n));
	return (0);
}*/
