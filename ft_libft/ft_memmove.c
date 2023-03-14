/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:22:16 by skunert           #+#    #+#             */
/*   Updated: 2023/03/14 16:07:49 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	unsigned char	*ptr_tmp;
	unsigned int	i;

	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	i = 0;
	while (ptr_dst != 0 && i < n)
	{
		ptr_tmp[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (ptr_dst != 0 && ptr_src != 0 && i < n)
	{
		ptr_dst[i] = ptr_tmp[i];
		i++;
	}
	return (dst);
}
