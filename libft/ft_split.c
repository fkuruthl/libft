/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:50:33 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 12:10:28 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_mem(char *s, int i)
{
	while (i >= 0)
	{
		free(&s[i]);
		i--;
	}
	free(s);
}

static char	*ft_strcpy(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	split = (((char **)malloc(sizeof(char *) * (count + 1))));
	if (!split)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		split[i] = ft_strcpy(s, c);
		if (!split)
			free_mem(*split, i);
		while (*s && *s != c)
			s++;
		i++;
	}
	split[i] = 0;
	return (split);
}
