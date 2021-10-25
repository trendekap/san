/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:32:17 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:32:18 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t size)
{
	size_t	i;

	i = 0;
	while (*a && i < size)
	{
		if (*a != *b)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
		i++;
	}
	if (i < size)
		return ((unsigned char)*a - (unsigned char)*b);
	return (0);
}
