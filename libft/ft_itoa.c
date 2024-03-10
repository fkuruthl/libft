/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:42:04 by fkuruthl          #+#    #+#             */
/*   Updated: 2023/12/06 11:22:48 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	digits_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		count;
	long		num;

	num = n;
	count = digits_len(n);
	if (n < 0)
	{
		num = -1 * num;
	}
	str_num = (char *)malloc(sizeof(char) * (count + 1));
	if (!str_num)
		return (NULL);
	str_num[count] = '\0';
	while (count--)
	{
		str_num[count] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
