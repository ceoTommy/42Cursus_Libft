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