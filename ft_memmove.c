/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:50:01 by tford             #+#    #+#             */
/*   Updated: 2022/01/25 14:21:44 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = dst;
	src_ptr = (unsigned char *)src;
	if (dst_ptr == src_ptr)
		return (dst);
	if (src_ptr - dst_ptr > 0)
	{
		i = 0;
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dst_ptr[len] = src_ptr[len];
	}
	return (dst);
}
