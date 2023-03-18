/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:51:08 by skunert           #+#    #+#             */
/*   Updated: 2023/03/18 22:57:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}

static int	check_front(const char *s, const char *set)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(set, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

static int	check_back(const char *s, const char *set)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	while (s[len] != s[0])
	{
		if (strchr(set, s[len]) != 0)
			break;
		i++;
		len--;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{

}

int main(void)
{
	char *s = "Simon";
	char *set = "Sni";
	printf("%d\n", ft_strtrim(s, set));
	return (0);
}
