#include "libft.h"


t_list *ft_lstnew(void *content)
{
    t_list  *b;

    b = (t_list*)malloc(sizeof(t_list));
    if(!b)
        return (NULL);
    b->content = content;
    b->next = NULL;
    return (b);
}
