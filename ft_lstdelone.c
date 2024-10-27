#include "libft.h"

// void ft_del(void *content)
// {
//     free(content);
// }

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(lst && del)
    {
        del(lst->content);
        free(lst);
    }
}