/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:03:54 by tford             #+#    #+#             */
/*   Updated: 2022/02/02 12:00:42 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n_blocks, size_t size)
{
	void	*p;

	p = malloc(n_blocks * size);
	if (p != NULL)
		ft_bzero(p, n_blocks * size);
	return (p);
}
