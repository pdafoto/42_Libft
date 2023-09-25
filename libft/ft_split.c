/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:30:28 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/25 17:37:43 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;
	int		len;
	int		substr_len;

	len = ft_strlen(s);
	substr_len = 0;
	arr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s)
	{
		while (s != c)
		{
			arr[i][j] = s;
			i++;
			s++;
		}
		if (s == c)
			j++;
			s++;
	}
	arr[i][j] = NULL;
	return arr[0][0];
}
