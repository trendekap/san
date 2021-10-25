/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:30:03 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:30:16 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		split1(char **a, const char *s, char c, int i);
int		len(const char *s, char c);
void	split2(char *d, const char *f, char c);
void	clean_split(int t, char **a);

char	**ft_split(const char *s, char c)
{
	char	**a;
	int		i;

	if (!s)
		return (NULL);
	i = len(s, c);
	a = (char **)malloc(sizeof(char *) * (i + 1));
	if (a == NULL)
		return (NULL);
	a[i] = 0;
	if (split1(a, s, c, 0) == -1)
		return (NULL);
	return (a);
}

int	len(const char *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0')
			&& (s[i] == c || s[i] == '\0') == 0)
			j++;
		i++;
	}
	return (j);
}

void	split2(char *a, const char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] == c || s[i] == '\0') == 0)
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
}

int	split1(char **a, const char *s, char c, int i)
{
	int		j;
	int		t;

	t = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
			i++;
		else
		{
			j = 0;
			while ((s[i + j] == c || s[i + j] == '\0') == 0)
				j++;
			a[t] = (char *)malloc(sizeof(char) * (j + 1));
			if (a[t] == NULL)
			{
				clean_split(t, a);
				return (-1);
			}
			split2(a[t], s + i, c);
			i += j;
			t++;
		}
	}
	return (0);
}

void	clean_split(int t, char **a)
{
	while (t >= 0)
	{
		free(a[t]);
		a[t] = NULL;
		t--;
	}
	free(a);
	a = NULL;
	return ;
}
