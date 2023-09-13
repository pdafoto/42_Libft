/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@studen.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:22:46 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/13 12:29:12 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;
	int		res;

	c = '5';
	res = ft_isalpha(c);
	printf("%d:\n%d\n", c, res);
	return (0);
}*/
