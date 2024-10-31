#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nbr;
	
	nbr = 0;
	if (!lst)
		return(0);
	while (lst != NULL)
	{
		nbr++;
		lst = lst->next;
	}
	return(nbr);
}
