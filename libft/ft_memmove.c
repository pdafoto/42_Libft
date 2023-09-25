/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:38:07 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/25 18:23:12 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_char;
	const char	*src_char;

	dst_char = (char *)dst;
	src_char = (const char *)src;
	if (dst_char > src_char && dst_char < src_char + len)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst_char[i] = src_char[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst_char[i] = src_char[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t n;

	(void)argc;
	printf("Origen: %s\n", argv[1]);
	printf("Destino: %s\n", argv[2]);
	printf("Introduce el tamaño: ");
	scanf("%zu", &n);
	ft_memmove(argv[2], argv[1], n);
	printf("Despues: %s\n", argv[2]);
	return (0);
}*/
