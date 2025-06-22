/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 00:31:22 by pecavalc          #+#    #+#             */
/*   Updated: 2025/06/17 12:47:20 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stddef.h>

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*lst_last;

	if (!lst || !new_node)
		return ;
	if (*lst == NULL)
	{
		*lst = new_node;
		new_node->next = NULL;
		return ;
	}
	lst_last = ft_lstlast(*lst);
	lst_last->next = new_node;
	new_node->next = NULL;
}
