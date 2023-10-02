/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:31 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/02 17:29:00 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s || f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char *c)
{
	printf("My inner function: index = %d and %c\n", i, *c);
	*c = *c - 32;
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("The result is %s\n", argv[1]);
	ft_striteri(argv[1], f);
	printf("The result is %s\n", argv[1]);
	return (0);
}*/
