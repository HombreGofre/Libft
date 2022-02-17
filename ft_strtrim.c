/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:16:53 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/17 19:09:26 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//de un string nos reserva una copia de s1 y nos lo devueve hbiendo eliminado
//los carcteres dados en set del principio y el final

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}
