/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:31:01 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:31:03 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *a, const char *b, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(a);
	len2 = ft_strlen(b);
	i = ft_strlen(a);
	j = 0;
	if (i < size - 1 && size > 0)
	{
		while (b[j] && (i < (size - 1)))
		{
			a[i] = b[j];
			j++;
			i++;
		}
		a[i] = '\0';
	}
	if (len1 >= size)
		len1 = size;
	return (len1 + len2);
}
