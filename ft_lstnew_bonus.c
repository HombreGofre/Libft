/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:27:23 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/11 19:27:30 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *lst;

    lst = malloc(sizeof(*lst));
    if (!lst)
        return (NULL);
    lst -> content = content;
    lst -> exit = NULL;
    return (lst);
}
