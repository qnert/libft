/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:40:53 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 20:14:56 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (little == big)
		return ((char *)big);
	while (i < len)
	{
		if (little[j] == big[i])
		{
			j = 0;
			while (little[j++] == big[i++] && i < len)
			{
				if (little[j] == '\0')
					return ((char *)big + i - j);
			}
		}
		i++;
	}
	return (NULL);
}
