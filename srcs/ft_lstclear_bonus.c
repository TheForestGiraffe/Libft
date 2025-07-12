/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:40:17 by pecavalc          #+#    #+#             */
/*   Updated: 2025/06/17 12:48:45 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_next;
	}
}
