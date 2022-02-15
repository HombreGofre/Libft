/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:36:49 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/14 15:40:02 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iterar "f" a "lst" para generar una nueva vaina
//creación de una nueva lista de la sucesión de la aplicación de "f"
//se eliminan con "del" lo que haya en el nuevo elemento en caso de ser necesario 

#include "libft.h"

t_list	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lment;
	
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (!(lst2 = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, lment);
		lst->next = lst;
	}
	return (lst2);
}
