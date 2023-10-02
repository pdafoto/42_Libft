/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:09:46 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 16:53:11 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	f(unsigned int i, char c)
{
	printf("My inner function: index = %d and %c\n", i, c);
	return c - 32;
}

int	main(int argc, char *argv[])
{
	char	*str;
	
	(void)argc;
	printf("The result is %s\n", argv[1]);
	str = ft_strmapi(argv[1], *f);
	printf("The result is %s\n", str);
	return (0);
}*/
