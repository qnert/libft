/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:51:08 by skunert           #+#    #+#             */
/*   Updated: 2023/03/19 19:42:58 by skunert          ###   ########.fr       */
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
	len = ft_strlen((char *)s);
	while (s[len - 1] != s[0])
	{
		if (ft_strchr(set, s[len - 1]) == 0)
			break ;
		i++;
		len--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	cpy_len;

	i = 0;
	start = check_front(s1, set);
	cpy_len = ft_strlen((char *)s1) - check_back(s1, set) - start;
	return (ft_substr(s1, start, cpy_len));
}
