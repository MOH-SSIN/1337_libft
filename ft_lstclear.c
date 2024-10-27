#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(lst && del)
    {
        t_list *ptr;

        while(*lst)
        {
            ptr = *lst;
            *lst = (*lst)->next;
            ft_lstdelone(ptr,del);
        }
    }
}