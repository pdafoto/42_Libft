/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@studen.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:22:46 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:07:52 by nperez-d         ###   ########.fr       */
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
	printf("%d:\n%d\n", c, res);
	return (0);
}*/
