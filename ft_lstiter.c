
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(lst)
	{
		(*f)(lst->content);
		lst->next;
	}
	if (!lst)
		return (0);
}
