/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/19 16:55:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    substr = (char *)ft_calloc(len + 1, sizeof(char));
    if (substr == NULL)
        return (NULL);
    i = 0;
    while(i < len && str[i + start])
    {
        substr[i] = str[i + start];
        i++;
    }
    return (substr);
}