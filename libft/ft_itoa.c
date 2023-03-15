/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:27:33 by skunert           #+#    #+#             */
/*   Updated: 2023/03/15 13:42:02 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	int	i;
	int	count;
	int	tmp;

	tmp = n;
	while (tmp / 10 != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	tmp = 1;
	count++;
	while (count != 0)
	{
		tmp = tmp * 10;
		count--;
	}
}
