#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	if (alst && new)
	{
		ptr = *alst;
		if (*alst == NULL)
			*alst = new;
		else
		{
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = new;
		}
	}
}
