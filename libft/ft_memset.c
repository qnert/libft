/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:23:16 by skunert           #+#    #+#             */
/*   Updated: 2023/03/15 10:10:43 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *) str;
	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}