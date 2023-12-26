/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:54:23 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/12/26 23:41:33 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *list_innit(void)
{
	t_list	*new_list;

	new_list = (t_list *)ft_calloc(1, sizeof(t_list_private));
	if (!new_list)
		return (NULL);
	new_list->add = __add;
	new_list->print = __print;
	return (new_list);
}
