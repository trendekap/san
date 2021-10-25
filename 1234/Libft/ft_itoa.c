/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:28:02 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:28:03 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*add_malloc(int size, int temp);
char	*check(int *temp, int *i);

char	*ft_itoa(int n)
{
	int		ost;
	int		i;
	char	*a;
	int		temp;

	i = 0;
	ost = 0;
	temp = n;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	a = check(&temp, &i);
	if (a == NULL)
		return (NULL);
	while (temp != 0)
	{
		i--;
		ost = temp % 10;
		temp = temp / 10;
		a[i] = ost + '0';
	}
	return (a);
}

char	*add_malloc(int size, int temp)
{
	char	*a;

	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	if (temp < 0)
		a[0] = '-';
	a[size] = '\0';
	return (a);
}

char	*check(int *temp, int *i)
{
	char	*a;

	if (*temp < 0)
	{
		(*i)++;
		a = add_malloc(*i, *temp);
		if (a == NULL)
			return (NULL);
		if (*temp == -2147483648)
		{
			a[1] = '2';
			*temp = -147483648;
		}
		*temp = -(*temp);
	}
	else if (*temp == 0)
	{
		a = add_malloc(1, *temp);
		if (a == NULL)
			return (NULL);
		a[0] = '0';
	}
	else
		a = add_malloc(*i, *temp);
	return (a);
}
