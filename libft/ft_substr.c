/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:09:19 by skunert           #+#    #+#             */
/*   Updated: 2023/03/24 18:17:56 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		s_len;
	char				*sub_str;

	i = 0;
	s_len = ft_strlen((char *)s);
	if (s_len - start > 0)
	{
		if (s_len - start < len || start > s_len)
			len = s_len;
	}
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	while (start < s_len && i < len && s[start] != '\0' && s[i] != '\0')
	{
		if (start > ft_strlen((char *)s))
			break ;
		sub_str[i] = s[start];
		i++;
		start++;
	}
	return (sub_str);
}
