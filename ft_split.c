/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:01:58 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/16 19:02:11 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//recorrremos el string para saber cuantas palabras tiene mi cadena
static int	contador(char	*str, char c)
{
	int i;
	int cont;
	
	i = 0;
	cont = 0;
	while (*str)
	{
			if(*str != c && cont == 0)
			{
				cont = 1;
				i++;
			}
			else if(*str == c)
				cont = 0;
			str++;
	}
	return (i);
}
//funcion  
static void	*tam_array(char *word, int len)
{

}

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	cont;
	size_t	start;
	size_t	len;

	new = malloc(sizeof(char *) * contador(*s, c));
	if (!new || !s)
		return (NULL);
	cont = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		return ;
		if (s[i] && s[i] != c)
			i++;
		*str
	}
}
