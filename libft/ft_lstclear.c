/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:50:19 by skunert           #+#    #+#             */
/*   Updated: 2023/03/24 11:04:52 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr_node;
	t_list	*tmp_free;

	curr_node = *lst;
	while (curr_node != NULL)
	{
		del(curr_node);
		tmp_free = curr_node;
		curr_node = curr_node->next;
		free(tmp_free);
	}
}
