/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:07:41 by tford             #+#    #+#             */
/*   Updated: 2022/02/02 12:24:26 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	ft_included(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	char	*trimmed;

	str = (char *)s1;
	len = ft_strlen(s1);
	while (ft_included(*str, set))
		str++;
	if (*str == '\0')
		return ((char *) ft_calloc(1, sizeof(char)));
	while (ft_included(s1[len - 1], set))
		len--;
	len -= (str - s1);
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	ft_strlcpy(trimmed, str, len + 1);
	return (trimmed);
}
