/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:39 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/29 20:14:40 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (0);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub_s = (char *)malloc((len + 1) * sizeof(char));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	start;
	size_t			len;

	(void)argc;
	printf("String: %s\n", argv[1]);
	printf("Introduce la posición inicial: ");
	scanf("%u", &start);
	printf("Introduce el tamaño: ");
	scanf("%zu", &len);
	printf("Substring: %s\n", ft_substr(argv[1], start, len));
	return (0);
} */
