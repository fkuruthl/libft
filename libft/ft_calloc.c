/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:34:12 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 02:44:55 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	size_t	total_size;

	total_size = count * size;
	if (size > 0 && count > 0 && total_size >= INT_MAX)
		return (NULL);
	temp = (void *) malloc(total_size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, total_size);
	return (temp);
}
