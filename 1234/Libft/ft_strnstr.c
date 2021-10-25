/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:32:32 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:32:33 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_read(const char *a, const char *b, size_t size, size_t i);

char	*ft_strnstr(const char *a, const char *b, size_t size)
{
	char	*c;

	if (!b[0] || a == b)
		return ((char *)a);
	c = str_read(a, b, size, 0);
	return (c);
}

char	*str_read(const char *a, const char *b, size_t size, size_t i)
{
	size_t	j;
	size_t	k;

	j = 0;
	while (a[i] && i < size)
	{
		if (a[i] == b[j])
		{
			k = i;
			while (b[j] && i < size)
			{
				if (a[i] != b[j])
					break ;
				i++;
				j++;
			}
			if (b[j] == 0)
				return ((char *)(a + i - j));
			j = 0;
			i = k;
		}
		i++;
	}
	return (NULL);
}
