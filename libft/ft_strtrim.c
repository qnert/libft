/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:39:57 by skunert           #+#    #+#             */
/*   Updated: 2023/03/15 11:52:24 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	len_s1;
	int	len_set;
	int	i;
	int tmp;

	i = 0;
	len_s1 = ft_strlen((char *) s1);
	len_set = ft_strlen((char *) set);
	if (s1[0] == set[0] && s1[1] == set[1])
	{
		
	}
}
