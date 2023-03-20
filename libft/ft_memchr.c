/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:34:47 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 19:04:12 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_str;
	unsigned int	i;

	ptr_str = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (ptr_str[i] == (unsigned char) c)
			return (ptr_str + i);
		if (ptr_str[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}
