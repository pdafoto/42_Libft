/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:48:07 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/29 14:44:46 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] && needle[j]
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	size;

	(void)argc;
	printf("Busca %s en %s\n", argv[2], argv[1]);
	printf("Introduce el número de caracteres a buscar: ");
	scanf("%u", &size);
	printf("Encontrado: %s\n", ft_strnstr(argv[1], argv[2], size));
	return (0);
}*/
