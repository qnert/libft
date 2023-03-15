/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:09:49 by skunert           #+#    #+#             */
/*   Updated: 2023/03/15 11:57:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*ptr_dst;
	int				i;

	ptr_dst = (unsigned char *) dst;
	i = 0;
	while (i++ < n)
		ptr_dst[i] = '\0';
}
