/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:33:07 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 14:52:38 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	t_list	*node;

	(void)argc;
	node = ft_lstnew(argv[1]);
	if (node == NULL)
	{
		printf("Failed to create a new node.\n");
		return (0);
	}
	printf("Node created successfully. Content: %s\n", (char *)node->content);
	free(node);
	return (0);
} */
