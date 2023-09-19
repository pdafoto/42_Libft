/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:48:07 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 20:22:26 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			k = 1;
			while (k < len)
			{
				if (needle[j + k] == '\0')
					return ((char *)haystack + i);
				k++;
			}
		}
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
