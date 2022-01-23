#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    //works
    write(fd, &c, 1);
}