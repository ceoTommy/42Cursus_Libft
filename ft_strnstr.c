#include "libft.h"

#include <stdlib.h>

char *ft_strnstr(const char *str, const char *search, size_t len)
{
    //unchecked
    unsigned int    i;

    if(*search == '\0')
        return (str);
	while (*str && --len)
	{
		i = 0;
		while (str[i] == search[i])
		{
			if (search[i + 1] == '\0')
				return (str);
			i++;
		}
		str++;
	}
    return (NULL);
}