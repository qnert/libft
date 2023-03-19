/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:27:33 by skunert           #+#    #+#             */
/*   Updated: 2023/03/19 20:18:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	nbr_len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		ten_pow;
	int		len;
	char	*nbr;

	i = 0;
	ten_pow = 1;
	len = nbr_len(n);
	nbr = (char *) malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	while (i != len - 1)
	{
		ten_pow *= 10;
		i++;
	}
	i = 0;
	while (ten_pow != 0)
	{
		nbr[i] = n / ten_pow + 48;
		n = n - (n / ten_pow * ten_pow);
		ten_pow = ten_pow / 10;
		i++;
	}
	return (nbr);
}
