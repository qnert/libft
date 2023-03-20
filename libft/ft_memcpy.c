/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:58:27 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 11:20:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!src)
		return (NULL);
	i = 0;
	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	while (ptr_src[i] && i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
