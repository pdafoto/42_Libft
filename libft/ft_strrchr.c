/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:07:22 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:55 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*final;

	i = 0;
	ch = c;
	final = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			final = ((char *)s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
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
