/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:08:12 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 11:55:32 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (temp_dest == temp_src)
		return (dst);
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (temp_dest);
}
