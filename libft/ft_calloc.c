/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:39:43 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/20 17:53:38 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(count * size);
	if (mem == 0)
		return (NULL);
	while (i < count * size)
	{
		mem[i] = '\0';
		i++;
	}
	return ((void *)mem);
}
/*
int main()
{
  ft_calloc(4, sizeof(int));
  return 0;
}*/
