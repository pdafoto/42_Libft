/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:12:18 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 19:33:43 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst)
		return (NULL);
	new = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
#include <stdio.h>

void	*duplicate_string(void *content)
{
	char *str = (char *)content;
	char *new_str = ft_strdup(str);

	return ((void *)new_str);
}

void	free_string(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *new_lst = NULL;
	t_list *temp;

	ft_lstadd_back(&lst, ft_lstnew("Hello"));
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstadd_back(&lst, ft_lstnew("!"));
	printf("Original list:\n");
	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	new_lst = ft_lstmap(lst, &duplicate_string, &free_string);
	printf("New list:\n");
	temp = new_lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
} */
