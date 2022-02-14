
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst)
	{
		if (lst)
		{
			lst = ft_lstlast(*lst);
			lst ->next = new;
		}
		else
			*new = lst;
	}
}
