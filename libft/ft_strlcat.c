/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:20:03 by skunert           #+#    #+#             */
/*   Updated: 2023/03/22 18:53:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dst_len;
	int	count;

	i = 0;
	dst_len = ft_strlen(dst);
	count = dstsize - dst_len;
	if (count > 0)
	{
		while (i < count - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	return (dst_len + ft_strlen((char *) src));
}
