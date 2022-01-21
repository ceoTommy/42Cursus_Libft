/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:03:54 by tford             #+#    #+#             */
/*   Updated: 2022/01/21 16:05:05 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t n_blocks, size_t size)
{
    //unchecked
    void *p;

    p = (void *)malloc(n_blocks * size);
	if (p != NULL)
    	ft_bzero(p, n_blocks);
    return (p);
}
