/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:14:32 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 20:07:05 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	c;
	size_t	len;

	(void)argc;
	printf("Origen: %s\n", argv[1]);
	printf("Introduce el valor ascii del caracter: ");
	scanf("%d", &c);
	printf("Introduce el tamaño: ");
	scanf("%zu", &len);
	ft_memset(argv[1], 'c', len);
	printf("Despues: %s\n", argv[1]);
	return (0);
}*/
