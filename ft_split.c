#include "libft.h"
#include <stdlib.h>

//ignores first char, changes *start to the end equivalant in the original string
static char *delim_str(char const *s, char end_c)
{
    size_t  i;
    char    *str;

    if (*s == '\0')
        return (ft_calloc(1, sizeof(char)));
    i = 1;
    while(s[i] && s[i] != end_c)
        i++;
    str = (char *) malloc((i + 1) * sizeof(char));
    if(str == NULL)
        return (NULL);
    ft_strlcpy(str, s, i + 1);
    s = s + i;
    return (str);
}

static size_t   wordCount(char const *s, char c)
{
    size_t  wordcount;
    size_t  i;
    
    if (*s == '\0')
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

//check that it works with just a null string
char    **ft_split(char const *s, char c)
{
    size_t  words;
    size_t  i;
    char    **splits;

    words = wordCount(s, c);
    splits = (char **) malloc(words + 1 * sizeof(char *));
    i = 0;
    while(i < words)
    {
        splits[i] = delim_str(s, c);
        i++;
    }
    splits[i] = NULL;
    return (splits);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
    //untested
    printf("[%s] splited:\n", av[1]);
    int i;

    i = 0;
    av = ft_split(av[1], av[2][0]);
    while(av[i] != NULL)
        printf("[%s]\n", av[i++]);
}
*/