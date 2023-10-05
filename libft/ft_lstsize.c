/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:18:10 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 16:30:16 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	ctr;

	ctr = 0;
	while (lst)
	{
		ctr++;
		lst = lst->next;
	}
	return (ctr);
}
/*
#include <stdio.h>

int main()
{
	t_list	*lst;
	t_list	*new_node;
	int		size;

	lst = ft_lstnew("node1");
	new_node = ft_lstnew("node2");
	lst->next = new_node;
	new_node = ft_lstnew("node3");
	lst->next->next = new_node;
	new_node = ft_lstnew("node4");
	lst->next->next->next = new_node;
	new_node = ft_lstnew("node5");
	lst->next->next->next->next = new_node;
	size = ft_lstsize(lst);
	printf("The size of the linked list is: %d\n", size);

	return (0);
} */
