/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:12:18 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/12 20:07:41 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;
	void	*content;

	if (!f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			(*del)(content);
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
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
