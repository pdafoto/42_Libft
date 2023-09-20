/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:26:33 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/20 17:54:42 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s2;

	len = 0;
	while (s1[len])
		len++;
	s2 = (char *)malloc(len * sizeof(char));
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	char	*s2;

	(void)argc;
	s2 = ft_strdup(argv[1]);
	printf("%s", s2);
	return (0);
}*/
