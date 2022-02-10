/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:51:02 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:23:18 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Buesca en entero dentro de un string
//*s no sea null y sea difernete de c
//una vez recorrida, el momento que coincide nos devuelve la coincidencia

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != 0 && *s != (char)c)
	{
		s++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*
int main()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
