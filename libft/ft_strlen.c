/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:11:30 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/14 12:50:45 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	ctr;

	ctr = 0;
	while (*str)
	{
		ctr++;
		str++;
	}
	return (ctr);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("La longitud de '%s' es %d\n", argv[1], ft_strlen(argv[1]));
	return (0);
}*/
