/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:32:16 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/12/27 00:21:53 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__print(t_list *this, char specifier)
{
	t_node	*tmp;

	if (specifier != 'i' && specifier != 'd' && specifier != 's')
	{
		ft_putstr_fd("Invalid specifier in the print function\n", 2);
		return ;
	}
	tmp = this -> begin;
	while (tmp)
	{
		if (specifier == 'i' || specifier == 'd')
			ft_printf("%i\n", (int *)tmp -> value);
		else 
			ft_printf("%s\n", (char *)tmp -> value);
		tmp = tmp -> next;
	}
}
