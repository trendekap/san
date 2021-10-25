/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:32:43 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:32:44 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *a, int b)
{
	int		len;

	len = ft_strlen(a) - 1;
	if (a[len + 1] == (char)b)
		return (&a[len + 1]);
	while (len >= 0)
	{
		if (a[len] == (char)b)
			return (&a[len]);
		len--;
	}
	if (a[len] == (char)b)
		return (&a[len]);
	return ((void *)0);
}
