/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:44:11 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 19:55:46 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
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
