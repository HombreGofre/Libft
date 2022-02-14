
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (lst)
	{
		*lst = del(lst->content)
		lst->next;
	}
	free (lst);
	*lst = 0;
}
