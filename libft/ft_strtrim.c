/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:51:08 by skunert           #+#    #+#             */
/*   Updated: 2023/03/24 14:58:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_front(const char *s, const char *set)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	check_back(const char *s, const char *set)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char *)s) - 1;
	while (len >= 0)
	{
		if (ft_strchr(set, s[len]) == 0)
			break ;
		i++;
		len--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	back;

	start = check_front(s1, set);
	back = check_back(s1, set);
	return (ft_substr(s1, start, ft_strlen((char *)s1) - back - start));
}
