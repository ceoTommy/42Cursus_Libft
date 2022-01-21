#include "libft.h"
#include <stdlib.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    //not checked
    char *s;

    s = (char *)str;
    while(--n)
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (NULL)
}