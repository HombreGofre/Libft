/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:55:53 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/04 17:03:39 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//la funcion calloc nos reserva un lugar en la memoria con malloc
//pero rellena de 0 el espacio reservado en caso de que haya mas elementos

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	i = malloc(count * size);
	if (!i)
		return (NULL);
	else
		ft_bzero(i, (count * size));
	return (i);
}
