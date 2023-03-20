/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:40:53 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 11:07:14 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	counter;

	i = 0;
	j = 0;
	counter = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (little[j] == big[i])
		{
			j = 0;
			while (little[j++] == big[i++] && big[i] != '\0')
			{
				counter++;
				if (little[j] == '\0')
					return ((char *)big + i - counter);
			}
		}
		i++;
	}
	return (NULL);
}
