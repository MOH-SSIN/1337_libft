/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:54:38 by mez-zahi          #+#    #+#             */
/*   Updated: 2024/10/31 12:54:40 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nbr;

	nbr = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		nbr++;
		lst = lst->next;
	}
	return (nbr);
}
