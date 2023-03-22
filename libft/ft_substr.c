/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:09:19 by skunert           #+#    #+#             */
/*   Updated: 2023/03/22 16:04:50 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*sub_str;

	i = 0;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < len && s[start] != '\0' && start <= ft_strlen((char *)s) && s[i] != '\0')
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	return (sub_str);
}
