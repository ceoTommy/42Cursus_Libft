/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/02/01 16:14:25 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = (char *)str;
	if (*search == '\0')
		return (p);
	j = 0;
	while (p[j] && j < len)
	{
		i = 0;
		while (p[j + i] == search[i] && i + j < len)
		{
			if (search[i + 1] == '\0')
				return (p + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
