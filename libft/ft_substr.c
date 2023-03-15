/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:09:19 by skunert           #+#    #+#             */
/*   Updated: 2023/03/15 11:07:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub_str;

	i = 0;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
