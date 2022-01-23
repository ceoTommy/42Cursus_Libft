/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/19 16:55:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//ignores first char, changes *start to the end equivalant in the original string
static char *delim_str(char const **s, char end_c)
{
    size_t  i;
    char    *str;

    if (**s == '\0')
        return (ft_calloc(1, sizeof(char)));
    i = 1;
    while((*s)[i] && (*s)[i] != end_c)
        i++;
    str = (char *) malloc((i + 1) * sizeof(char));
    if(str == NULL)
        return (NULL);
    ft_strlcpy(str, *s, i + 1);
    *s += i;
    return (str);
}

static size_t   wordCount(char const *s, char c)
{
    size_t  wordcount;
    size_t  i;
    
    if (!*s)
        return (1);
    wordcount = 1;
    i = 1;
    while (s[i])
    {
        if (s[i] == c)
            wordcount++;
        i++;
    }
    return (wordcount);
}

char    **ft_split(char const *str, char c)
{
    size_t      words;
    size_t      i;
    char        **splits;
    char const  *s;

    s = str;
    words = wordCount(s, c);
    splits = (char **) malloc((words + 1) * sizeof(char *));
    i = 0;
    while(i < words)
    {
        splits[i] = delim_str(&s, c);
        i++;
    }
    splits[i] = NULL;
    return (splits);
}