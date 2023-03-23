/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:31:38 by skunert           #+#    #+#             */
/*   Updated: 2023/03/23 08:44:17 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*curr_pos;

	i = 0;
	curr_pos = lst;
	while (curr_pos != NULL && curr_pos->next != NULL)
	{
		i++;
		curr_pos = curr_pos->next;
	}
	return (curr_pos);
}
