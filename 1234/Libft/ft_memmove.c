/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:28:48 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:28:50 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *a, void *b, int size)
{
	int	i;

	i = 0;
	if (a > b)
	{
		i = size - 1;
		while (i >= 0)
		{
			((unsigned char *)a)[i] = ((unsigned char *)b)[i];
			i--;
		}
	}
	else if (a == b)
	{
		return (a);
	}
	else
	{
		while (i < size)
		{
			((unsigned char *)a)[i] = ((unsigned char *)b)[i];
			i++;
		}
	}
	return (a);
}
