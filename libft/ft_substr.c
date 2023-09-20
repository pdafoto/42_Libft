/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:39 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/20 19:45:08 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (start > ft_strlen(s))
		return (NULL);
	sub_s = (char *)malloc(len * sizeof(char));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	return (sub_s);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	start;
	size_t			len;

	(void)argc;
	printf("String: %s\n", argv[1]);
	printf("Introduce la posición inicial: ");
	scanf("%u", &start);
	printf("Introduce el tamaño: ");
	scanf("%zu", &len);
	printf("Substring: %s\n", ft_substr(argv[1], start, len));
	return (0);
} */
