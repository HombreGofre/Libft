/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:25:29 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:02:54 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La función bzero sustituye n bytes del sring por 0
//si no hay nada en el sring es NULL

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
/*
int main()
{
	char s[11] = "Hello World";
	ft_bzero(s, 4);

	puts(s);
}*/ //Añadir librería stdio.h para hacer la prueba.
