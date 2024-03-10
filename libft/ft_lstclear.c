/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:23:39 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 02:00:20 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!lst)
	{
		return ;
	}
	while (*lst)
	{
		new = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new;
	}
}
