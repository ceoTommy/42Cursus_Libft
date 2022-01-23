/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/19 16:55:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strnstr(const char *str, const char *search, size_t len)
{
    //unchecked
    size_t	i;
	char	*p;

	p = (char *)str;
    if(*search == '\0')
		return (p);
	while (*p && --len)
	{
		i = 0;
		while (p[i] == search[i])
		{
			if (search[i + 1] == '\0')
				return (p);
			i++;
		}
		p++;
	}
    return (NULL);
}