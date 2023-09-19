/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:02:38 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 12:57:07 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (s1[i] && s2[i] && i < n && res == 0)
	{
		res = s1[i] - s2[i];
		i++;
	}
	if ((s1[i] == '\0' || s2[i] == '\0') && i < n && res == 0)
		res = s1[i] - s2[i];
	return (res);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	unsigned int	size;

// 	(void)argc;
// 	printf("1: %s\n2: %s\n", argv[1], argv[2]);
// 	printf("Introduce el número de caracteres a comparar: ");
// 	scanf("%u", &size);
// 	printf("1ª diferencia: %d\n", ft_strncmp(argv[1], argv[2], size));
// 	return (0);
// }
