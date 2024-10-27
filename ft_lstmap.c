#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *nouvell;
    t_list  *ptr;
    if(!lst)
        return(NULL);

    ptr = NULL;
    nouvell = NULL;
    while(lst)
    {
        ptr = ft_lstnew(ft_lstnew(f(lst->content)));
        if(!ptr)
        {
            ft_lstclear(&nouvell,del);
            return (NULL);
        }
        ft_lstadd_back(&nouvell,ptr);
        lst = lst->next;
    }
    return(ptr);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	if (!lst)
		return (NULL);
	newlst = NULL;
	node = NULL;
	while (lst)
	{
		
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}