/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:58:08 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/05 21:34:39 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start > str_len)
		len = 0;
	if (len > str_len - start)
	{
		len = str_len - start;
	}
	temp = (char *)malloc((len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (start < str_len && i < len)
		temp[i++] = s[start++];
	temp[i] = '\0';
	return (temp);
}
