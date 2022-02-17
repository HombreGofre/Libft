/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:01:58 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/17 17:47:11 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//recorrremos el string para saber cuantas palabras tiene mi cadena
static int	ft_contador(char const *str, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (*str)
	{
		if (*str != c && cont == 0)
		{
			cont = 1;
			i++;
		}
		else if (*str == c)
			cont = 0;
		str++;
	}
	return (i);
}

char	**ft_freesplit(char **new)
{
	size_t	i;

	i = 0;
	if (new != NULL)
		return (NULL);
	while (new[i])
	{
		free (new[i]);
		i++;
	}
	free (new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	start;
	size_t	len;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char *) * (ft_contador(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		new[len++] = ft_substr(s, start, i - start);
		if (!new[len - 1])
			return (ft_freesplit(new));
	}
	new[len] = NULL;
	return (new);
}
