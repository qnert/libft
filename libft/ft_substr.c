/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:09:19 by skunert           #+#    #+#             */
/*   Updated: 2023/03/27 15:58:22 by skunert          ###   ########.fr       */
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
	if (start > s_len)
		len = 0;
	if (len > s_len)
		len = s_len;
	if (start + len > s_len)
		len = s_len - start;
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
