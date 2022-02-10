/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:33:11 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:16:14 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		while (len-- > 0)
		{
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
/*
int main()
{
	char str1[] = "Hola Pedro";
	char str2[] = "Ciao";

	printf("La cadena %s\n", str1);
	ft_memmove(str1, str2, 4);
	printf("La nueva cadena es %s\n", srt1);
}*/
