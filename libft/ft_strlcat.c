/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:47:15 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 09:42:17 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	if (dstsize == 0)
		return (src_len);
	while (dst[i] && i < dstsize - 1)
		i++;
	while (src[j] && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dest_len + src_len);
}
