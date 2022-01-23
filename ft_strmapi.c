#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t          len;
    unsigned int    i;
    char            *str;

    len = ft_strlen(s);
    str = (char *) malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = (*f)(len, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}