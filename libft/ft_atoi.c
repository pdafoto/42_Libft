/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:08:26 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 20:19:50 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	posneg;
	int	nb;

	i = 0;
	posneg = 1;
	nb = 0;
	if (str[i])
	{
		while (((str[i] > 8) && (str[i] < 14)) || (str[i] == ' '))
			i++;
		while ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				posneg = posneg * -1;
			i++;
		}
		while ((str[i] > '/') && (str[i] < ':'))
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
	}
	nb = nb * posneg;
	return (nb);
}
/*
#include <stdio.h>

int	main(int argc,char *argv[])
{
	int	nb;

	(void)argc;
	nb = ft_atoi(argv[1]);
	printf("%d", nb);
	return (0);
}*/
