#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    //unchecked
    size_t len;

    len = ft_strlen(str);
    dup = (char *)malloc(len * sizeof(char));
    return (ft_memcpy(dup, str, len));
}