/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:05:42 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/20 17:54:57 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;
	if (dstsize < 1)
		return (i);
	j = 0;
	while (src[j] && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	size_t	dstsize;

// 	(void)argc;
// 	printf("Origen: %s\nDestino: %s\n", argv[1], argv[2]);
// 	printf("Introduce el tamaño: ");
// 	scanf("%zu", &dstsize);
// 	ft_strlcpy(argv[2], argv[1], dstsize);
// 	printf("Resultado: %s\n", argv[2]);
// 	return (0);
// }
