/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:51:00 by skunert           #+#    #+#             */
/*   Updated: 2023/03/19 19:14:06 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	check_split_words(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] == c && s[i + 1] != '\0')
			{
			}
			else
			{
				counter++;
			}
		}
		i++;
	}
	if (s[ft_strlen((char *)s) - 1] == c)
	{
		counter--;
	}
	return (counter + 1);
}

static int	check_split_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	return (i);
}

static char	*get_word(char *s, char c)
{
	int		i;
	int		tmp;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	tmp = i;
	i = 0;
	while (i < tmp)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*get_next_word(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while(s[i] != '\0' && s[i] == c)
			{
				i++;
			}
			break;
		}
		i++;
	}
	return (s + i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char **arr;

	return (NULL);
}

int	main(void)
{
	char *s = "Simon";
	char c = 'm';
	char *str = get_next_word(s, c);

	printf("%s\n", str);
	return (0);
}
