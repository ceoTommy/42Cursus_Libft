/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:08:34 by tford             #+#    #+#             */
/*   Updated: 2022/01/25 14:12:24 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *) malloc(1 * sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
