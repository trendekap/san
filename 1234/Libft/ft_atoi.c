/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:26:16 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:26:18 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	foo(unsigned long long int *nb, int *flag);

int	ft_atoi(const char *str)
{
	unsigned long long int		nb;
	int							i;
	int							flag;

	nb = 0;
	i = 0;
	flag = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	foo(&nb, &flag);
	return (nb * flag);
}

void	foo(unsigned long long int *nb, int *flag)
{
	if (*nb > 9223372036854775807)
	{
		if (*flag == -1)
			*flag = *flag * 0;
		else
		{
			*flag = -1;
			*nb = 1;
		}
	}
}
