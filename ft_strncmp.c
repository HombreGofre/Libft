/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:53:35 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:49:51 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//mientras recorra ambos string y sean iguales guay
//cuenado el contardor no sea n nos devuelve la diferencia

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i] && s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - s2[i]);
}
