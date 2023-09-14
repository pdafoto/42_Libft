/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:05:42 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 13:38:23 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;
	if (size < 1)
		return (i);
	j = 0;
	while (src[j] && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
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
	ft_strlcpy(argv[2], argv[1], size);
	printf("Resultado: %s\n", argv[2]);
	return (0);
}*/
