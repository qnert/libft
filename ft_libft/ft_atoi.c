/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:50:23 by skunert           #+#    #+#             */
/*   Updated: 2023/03/14 17:25:01 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		if (str[0] == '-')
			sign = -1;
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
