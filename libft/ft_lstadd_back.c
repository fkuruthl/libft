/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:23:45 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 02:40:43 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
	{
		*lst = new;
	}
}
