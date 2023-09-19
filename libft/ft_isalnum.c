/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:26:34 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 12:15:59 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
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
	res = ft_isalnum(c);
	printf("%c:\n%c\n", c, res);
	return (0);
}*/
