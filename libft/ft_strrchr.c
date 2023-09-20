/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:07:22 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/20 17:55:31 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*final;

	final = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			final = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (final);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	c;

	(void)argc;
	printf("%s\n", argv[1]);
	printf("Introduce el caracter a buscar: ");
	scanf(" %c", &c);
	printf("1ª coincidencia: %s\n", ft_strrchr(argv[1], c));
	return (0);
}*/
