/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:33:51 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:40 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	size_t	n;

// 	(void)argc;
// 	printf("Origen: %s\n", argv[1]);
// 	printf("Introduce el tamaño: ");
// 	scanf("%zu", &n);
// 	ft_bzero(argv[1], n);
// 	printf("Después: %s\n", argv[1]);
// 	return (0);
// }
