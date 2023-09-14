/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:00 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 10:47:02 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	res;

	(void)argc;
	c = *argv[1];
	res = ft_tolower(c);
	printf("%c:\n%c\n", c, res);
	return (0);
}*/
