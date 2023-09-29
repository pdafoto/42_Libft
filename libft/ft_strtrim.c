/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:14:32 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/29 20:55:16 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*sub_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]) && begin <= end)
		begin++;
	if (begin > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	sub_str = malloc((end - begin + 2) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, &s1[begin], end - begin + 2);
	return (sub_str);
}
/* char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
} */
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("String: %s\n", argv[1]);
	printf("Trim: %s\n", argv[2]);
	printf("Result: %s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}
 */
