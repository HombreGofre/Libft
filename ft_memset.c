/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:28:32 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:18:19 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En una cadena "void b" se sustituye el numero de caracteres "size_t len"
//y se sustituye por el entero indicado "int c"

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (len-- > 0)
	{
		str[i++] = (unsigned char)c;
	}
	return (b);
}
/*
 * int main()
 * {
 * 	char str[20];
 *
 * 	strcpy(str, "Funcion memset en 42");
 * 	puts(str);
 *
 * 	ft_memset(str; '$', 7);
 * 	puts(str);
 *}
 */ //incluir librerías stdio.h y string.h para comprobarlo
