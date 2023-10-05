/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:52:36 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 17:02:15 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
	t_list	*list1;
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	new_list->content = "new";
	new_list->next = NULL;
	list1 = (t_list *)malloc(sizeof(t_list));
	list1->content = "first";
	list1->next = NULL;
	ft_lstadd_back(&list1, new_list);
	while (list1 != NULL)
	{
		printf("%s\n", (char *)list1->content);
		list1 = list1->next;
	}
	return (0);
}
 */
