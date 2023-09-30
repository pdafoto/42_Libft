/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:44:11 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/30 12:06:58 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		else
			s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char	c;

// 	(void)argc;
// 	printf("%s\n", argv[1]);
// 	printf("Introduce el caracter a buscar: ");
// 	scanf(" %c", &c);
// 	printf("1ª coincidencia: %s\n", ft_strchr(argv[1], c));
// 	return (0);
// }
