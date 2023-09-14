/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:38:39 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 14:55:57 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	ctr;

	ctr = 0;
	while (*str)
	{
		ctr++;
		str++;
	}
	return (ctr);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ctr_dest;
	unsigned int	ctr_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	ctr_dest = 0;
	ctr_src = 0;
	while (dest[ctr_dest])
		ctr_dest++;
	len_dest = ctr_dest;
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[ctr_src] && ctr_src < size - len_dest -1)
	{
		dest[ctr_dest] = src[ctr_src];
		ctr_dest++;
		ctr_src++;
	}
	dest[ctr_dest] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	size;

	(void)argc;
	printf("Origen: %s\nDestino: %s\n", argv[1], argv[2]);
	printf("Introduce el tamaño: ");
	scanf("%u", &size);
	ft_strlcat(argv[2], argv[1], size);
	printf("Resultado: %s\n", argv[2]);
	return (0);
}*/
