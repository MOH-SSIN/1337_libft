#include "libft.h"

char *ft_strdup(const char *s)
{
    char    *ptr;
    size_t  i;
    size_t  size;

    i = -1;
    size = ft_strlen(s);
    ptr = (char *)malloc(size + 1);
    if(!ptr)
        return(NULL);
    while(++i < size)
        ptr[i] = s[i];
    ptr[i] = '\0';
    return(ptr);
}