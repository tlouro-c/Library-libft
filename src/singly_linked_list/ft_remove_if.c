/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:56:07 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/12/22 15:32:16 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remove_if(t_node **list, void *ref,
			int (*cmp)(void *content, void *ref))
{
	t_node	*current;
	t_node	*tmp;

	if (list == NULL || *list == NULL)
		return ;
	current = *list;
	while (current != NULL)
	{
		if (cmp(current -> content, ref) == 0)
		{
			tmp = current;
			current = tmp -> next;
			tmp -> next = NULL;
			free(tmp -> content);
			free(tmp);
		}
		else
			current = current -> next;
	}
}
