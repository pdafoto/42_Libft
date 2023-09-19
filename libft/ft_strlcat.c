/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:38:39 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 12:47:14 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	ctr_dst;
	size_t	ctr_src;

	ctr_dst = 0;
	ctr_src = 0;
	while (dst[ctr_dst])
		ctr_dst++;
	while (src[ctr_src])
		ctr_src++;
	if (dstsize == 0 || dstsize <= ctr_dst)
		return (ctr_src + dstsize);
	while (*src && ctr_dst < dstsize - 1)
	{
		dst[ctr_dst] = *src;
		ctr_dst++;
		src++;
	}
	dst[ctr_dst] = '\0';
	return (ctr_dst + ctr_src);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	size_t	dstsize;

// 	(void)argc;
// 	printf("Origen: %s\nDestino: %s\n", argv[1], argv[2]);
// 	printf("Introduce el tamaño: ");
// 	scanf("%zu", &dstsize);
// 	ft_strlcat(argv[2], argv[1], dstsize);
// 	printf("Resultado: %s\n", argv[2]);
// 	return (0);
// }
