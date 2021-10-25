/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:28:14 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:28:16 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *a, int c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(a + i) == (unsigned char)c)
		{
			return (&a[i]);
		}
		i++;
	}
	return ((void *)0);
}
