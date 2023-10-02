/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:22:02 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 19:16:44 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_char;
	char	*src_char;

	if (!dst && !src)
		return (0);
	dst_char = (char *)dst;
	src_char = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	size_t n;

// 	(void)argc;
// 	printf("Origen: %s\n", argv[1]);
// 	printf("Destino: %s\n", argv[2]);
// 	printf("Introduce el tamaño: ");
// 	scanf("%zu", &n);
// 	ft_memcpy(argv[2], argv[1], n);
// 	printf("Despues: %s\n", argv[2]);
// 	return (0);
// }
