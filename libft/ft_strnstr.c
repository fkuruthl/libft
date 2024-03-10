/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:05:23 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 02:48:21 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j) < len && needle[j] && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
