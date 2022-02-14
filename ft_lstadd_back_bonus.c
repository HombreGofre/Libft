/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:34:39 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/14 19:31:30 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*fin;

	if (!lst)
		return ;
	if (*lst)
	{
		fin = *lst;
		while (fin->next)
			fin = fin->next;
		fin->next = new;
	}
	else
		*lst = new;
}
