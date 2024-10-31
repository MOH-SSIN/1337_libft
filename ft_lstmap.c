#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*cellule;

	if (!lst)
		return (NULL);
	new_list = NULL;
	cellule = NULL;
	while (lst)
	{
		cellule = ft_lstnew(f(lst->content));
		if (!cellule)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, cellule);
		lst = lst->next;
	}
	return (new_list);
}
