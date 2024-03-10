/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:23:42 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 01:00:04 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	if (!lst)
	{
		*lst = new;
	}
	new->next = *lst;
	*lst = new;
}
