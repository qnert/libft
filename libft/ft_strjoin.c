/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:07:42 by skunert           #+#    #+#             */
/*   Updated: 2023/03/19 20:17:12 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*str_j;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	i = 0;
	j = 0;
	str_j = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_j)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_j[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_j[i + j] = s2[j];
		j++;
	}
	str_j[i + j] = '\0';
	return (str_j);
}
