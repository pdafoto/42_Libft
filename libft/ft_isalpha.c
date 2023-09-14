/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@studen.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:22:46 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 10:34:22 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	res;

	(void)argc;
	c = *argv[1];
	res = ft_isalpha(c);
	printf("%c:\n%c\n", c, res);
	return (0);
}*/
