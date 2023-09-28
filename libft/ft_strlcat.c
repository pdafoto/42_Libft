/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:38:39 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/28 16:09:20 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	tot_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	tot_len = dst_len + src_len;
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	while (*src && dst_len < dstsize - 1)
	{
		dst[dst_len] = *src;
		dst_len++;
		src++;
	}
	dst[dst_len] = '\0';
	return (tot_len);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	dstsize;

	(void)argc;
	printf("Origen: %s\nDestino: %s\n", argv[1], argv[2]);
	printf("Introduce el tamaño: ");
	scanf("%zu", &dstsize);
	ft_strlcat(argv[2], argv[1], dstsize);
	printf("Resultado: %s\n", argv[2]);
	return (0);
}
*/
