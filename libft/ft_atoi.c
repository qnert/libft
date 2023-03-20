/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:50:23 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 11:04:43 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check_sign(const char *str, unsigned int *ptr_index)
{
	if (str[0] == '-')
	{
		*ptr_index += 1;
		return (-1);
	}
	if (str[0] == '+')
	{
		*ptr_index += 1;
		return (1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				res;
	int				sign;

	i = 0;
	res = 0;
	sign = check_sign(str, &i);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
		{
			res += str[i] - '0';
			if (str[i + 1] != '\0')
				res = res * 10;
		}
		i++;
	}
	return (res * sign);
}
