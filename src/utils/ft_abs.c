/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:40:02 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/11/25 01:28:14 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
