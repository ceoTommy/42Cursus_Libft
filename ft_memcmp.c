/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/19 16:55:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    //not checked
    size_t i;
    char *s1;
    char *s2;

    i = 0;
    s1 = (char *)str1;
    s2 = (char *)str2;
    while(s1[i] == s2[i] && i < n)
        i++;
    return (s1[i] - s2[i]);
}