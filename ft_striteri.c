#include "libft.h"
#include <stdlib.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t          len;
    unsigned int    i;

    len = ft_strlen(s);
    while (i < len)
    {
        (*f)(i, s + i);
        i++;
    }
}