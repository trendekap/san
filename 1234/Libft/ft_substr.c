/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:33:03 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:33:04 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if ((size_t)ft_strlen(s) < len)
		a = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			a[j] = s[i];
			j++;
		}
		i++;
	}
	a[j] = '\0';
	return (a);
}
