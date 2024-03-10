/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:32:38 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 03:21:45 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((const char *)s);
	if (c == '\0')
	{
		return ((char *)(s + len));
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
