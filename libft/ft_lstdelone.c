/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:56:26 by nperez-d          #+#    #+#             */
/*   Updated: 2023/10/05 18:25:58 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void del_content(void *content)
{
	free(content);
}

int main(void)
{
	char *str = ft_strdup("Hello, world!");

	t_list *lst = (t_list*)malloc(sizeof(t_list));
	lst->content = str;
	lst->next = NULL;

	ft_lstdelone(lst, del_content);

	return 0;
} */
