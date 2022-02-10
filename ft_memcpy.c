/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:12:03 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/01/30 19:27:03 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta función sirve para copiar una cadena "src" en "dest" con el tamaño que 
//se declara en "size_t n" - recordar añadir string.h para comprobar

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
/*
int main()
{
	char str1[] = "Salsa";
	char str2[] = "Merengue";

	puts("str1 Antes de ft_memcpy ");
	puts(str1);

	ft_memcpy (str1, str2, sizeof(str2));

	puts("\nstr1 Despues de ft_memcpy ");
	puts(str1);
}
*/
