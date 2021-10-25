/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:32:54 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:32:55 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_len(int *i, int *a, char const *set, char const *s1);
int	while_str(int *a, char const *s1, int len_str, int *start_str);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a[128];
	int		start_str;
	int		j;
	int		len;
	char	*b;

	len = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = set_len(&start_str, a, set, s1);
	b = malloc(sizeof(char) * (len + 1));
	if (b == NULL)
		return (NULL);
	while (j < len)
	{
		b[j] = s1[start_str];
		j++;
		start_str++;
	}
	b[j] = '\0';
	return (b);
}

int	set_len(int *start_str, int *a, char const *set, char const *s1)
{
	int		len;
	int		len_str;
	int		i;

	len = 0;
	i = 0;
	len_str = ft_strlen(s1);
	while (i < 128)
	{
		a[i] = 0;
		i++;
	}
	i = 0;
	while (set[i])
	{
		a[(int)set[i]] = 1;
		i++;
	}
	len = while_str(a, s1, len_str, start_str);
	return (len);
}

int	while_str(int *a, char const *s1, int len_str, int *start_str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s1[i])
	{
		if (a[(int)s1[i]] == 0)
			break ;
		len++;
		i++;
	}
	if (s1[i] == '\0')
		return (0);
	*start_str = i;
	i = len_str - 1;
	while (s1[i])
	{
		if (a[(int)s1[i]] == 0)
			break ;
		len++;
		i--;
	}
	return (len_str - len);
}
