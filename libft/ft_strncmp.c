/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:02:38 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 15:12:00 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	size;

	(void)argc;
	printf("1: %s\n2: %s\n", argv[1], argv[2]);
	printf("Introduce el número de caracteres a comparar: ");
	scanf("%u", &size);
	printf("Primera diferencia encontrada: %d\n", ft_strncmp(argv[1], argv[2], size));
	return (0);
}*/
