/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:11:30 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/19 12:17:26 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	ctr;

	ctr = 0;
	while (*s)
	{
		ctr++;
		s++;
	}
	return (ctr);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("La longitud de '%s' es %zu\n", argv[1], ft_strlen(argv[1]));
// 	return (0);
// }
