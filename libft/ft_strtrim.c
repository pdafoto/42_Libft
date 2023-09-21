/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:14:32 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/21 18:47:35 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		s1_len;
	int		i;
	int		j;
	int		k;

	s1_len = ft_strlen(s1);
	s2 = (char *)malloc(s1_len * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < s1_len)
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				s2[k] = 
		}
	}
}
