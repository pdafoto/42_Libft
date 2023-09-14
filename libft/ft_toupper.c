/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:19:53 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 10:49:13 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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
	res = ft_toupper(c);
	printf("%c:\n%c\n", c, res);
	return (0);
}*/
