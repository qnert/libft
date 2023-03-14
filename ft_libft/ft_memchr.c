/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:34:47 by skunert           #+#    #+#             */
/*   Updated: 2023/03/14 16:38:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_str;
	unsigned int	i;

	ptr_str = (unsigned char *) str;
	i = 0;
	while (ptr_str != 0 && i < n)
	{
		if (ptr_str[i] == (unsigned char) c)
		{
			return (ptr_str + i);
		}
		i++;
	}
	return (NULL);
}
