/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:13:18 by skunert           #+#    #+#             */
/*   Updated: 2023/03/18 22:49:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			tmp = (char *) str + i;
		}
		i++;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp);
}
