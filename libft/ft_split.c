/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:30:28 by nperez-d          #+#    #+#             */
/*   Updated: 2023/09/27 20:53:46 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	wrd_cnt;
	int		i;
	int		count;

	wrd_cnt = 0;
	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] != c && count == 1)
		{
			wrd_cnt++;
			count = 0;
		}
		else if (s[i] == c)
			count = 1;
		i++;
	}
	return (wrd_cnt);
}

static void	cut_words(char **words, char const *s, char c, size_t wrd_cnt)
{
	char	*ptr_c;

	while (*s && *s == c)
		s++;
	while (wrd_cnt)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
		wrd_cnt--;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	wrd_cnt;

	if (s == NULL)
		return (NULL);
	wrd_cnt = word_count(s, c);
	words = malloc((wrd_cnt + 1) * sizeof(char **));
	if (words == NULL)
		return (NULL);
	cut_words(words, s, c, wrd_cnt);
	return (words);
}
/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	char	c;
	char	**words;

	(void)argc;
	printf("%s\n", argv[1]);
	printf("Introduce el caracter separador: ");
	scanf(" %c", &c);
	words = ft_split(argv[1], c);
	while (*words) printf( "%s\n", *words++ );
	return (0);
} */
