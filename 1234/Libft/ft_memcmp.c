/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:28:24 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:28:25 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a, const void *b, int size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (*(unsigned char *)(a + i) != *(unsigned char *)(b + i))
		{
			return (*(unsigned char *)(a + i) - *(unsigned char *)(b + i));
		}
		i++;
	}
	return (0);
}
