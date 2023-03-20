/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:51:00 by skunert           #+#    #+#             */
/*   Updated: 2023/03/20 16:06:01 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*get_alloc_word(const char *s, char c)
{
	int		i;
	int		tmp;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
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

static const char	*get_next_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0' && s[i] == c)
			{
				i++;
			}
			break ;
		}
		i++;
	}
	return (s + i);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	const char	*curr_pos;
	const char	*tmp;
	const char	**arr;

	i = 0;
	curr_pos = s;
	arr = ft_calloc(check_split_words(s, c), sizeof(char *));
	while (i < check_split_words(s, c))
	{
		tmp = get_alloc_word(curr_pos, c);
		arr[i] = tmp;
		curr_pos = get_next_word(curr_pos, c);
		i++;
	}
	return ((char **)arr);
}
