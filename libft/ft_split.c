/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:30:28 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/12 19:52:56 by nperez-d         ###   ########.fr       */
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

static int	word_len(const char *s, char c)
{
	int	i;
	int	wrd_len;

	i = 0;
	wrd_len = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (wrd_len);
		wrd_len++;
		i++;
	}
	return (wrd_len);
}

static void	word_copy(char *dst, const char *src, int wrd_len)
{
	int	i;

	i = 0;
	while (i < wrd_len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void	free_word(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(const char *s, char c)
{
	char		**array;
	int			i;
	int			wrd_cnt;

	wrd_cnt = word_count(s, c);
	array = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (*s && wrd_cnt > 0)
	{
		if (!word_len(s, c))
			s++;
		else
		{
			array[i++] = (char *)malloc(sizeof(char) * word_len(s, c) + 1);
			if (!array[i - 1])
				return (free_word(array, i), NULL);
			word_copy(array[i - 1], s, word_len(s, c));
			s = s + word_len(s, c);
			wrd_cnt--;
		}
	}
	array[i] = NULL;
	return (array);
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
