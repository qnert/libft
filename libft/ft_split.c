/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:51:00 by skunert           #+#    #+#             */
/*   Updated: 2023/03/16 19:10:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_splits(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
}
