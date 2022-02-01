/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/28 15:36:19 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	chars_left;
	size_t	i;

	if (start > ft_strlen(str))
		chars_left = 0;
	else
		chars_left = ft_strlen(str + start);
	if (chars_left < len)
	{
		len = chars_left;
	}
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && str[i + start])
	{
		substr[i] = str[i + start];
		i++;
	}
	return (substr);
}
