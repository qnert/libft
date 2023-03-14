/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:40:53 by skunert           #+#    #+#             */
/*   Updated: 2023/03/14 13:17:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (little[j] == big[i])
		{
			while (little[j] == big[i] && big[i] != '\0')
			{
				i++;
				j++;
				counter++;
				if (little[j] == '\0')
					return ((char *)big + i - counter);
			}
			j = 0;
			i++;
		}
		i++;
	}
	return (NULL);
}
