#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t n_blocks, size_t size)
{
    //unchecked
    void *p;

    p = (void *)malloc(n_blocks * size);
    ft_bzero(p, n_blocks);
    return (p);
}