/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:59:43 by tford             #+#    #+#             */
/*   Updated: 2022/01/25 14:00:55 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
	lst = NULL;
}
