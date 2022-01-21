/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:05:15 by tford             #+#    #+#             */
/*   Updated: 2022/01/21 16:06:08 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    //unchecked
    size_t len;

    len = ft_strlen(str);
    dup = (char *)malloc((len + 1) * sizeof(char));
	if(dup == NULL)
		return (NULL);
    return (ft_memcpy(dup, str, len + 1));
}
