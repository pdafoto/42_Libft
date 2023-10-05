/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:34:23 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 18:59:52 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nxt;

	node = *lst;
	while (node)
	{
		nxt = node->next;
		ft_lstdelone(node, del);
		node = nxt;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst;
	t_list	*node;

	lst = ft_lstnew("element1");
	node = ft_lstnew("element2");
	lst->next = node;
	node = ft_lstnew("element3");
	ft_lstadd_back(&lst, node);

	printf("Before clearing the list:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	ft_lstclear(&lst, del);

	printf("After clearing the list:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	return (0);
}
 */
