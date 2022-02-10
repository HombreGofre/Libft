/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:32:32 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/02/07 20:14:30 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//reservar un malloc de memoria de 's' 
//la nueva string empieza en 'start' con la longitud de 'len'
//para proteger el malloc if return 0 justo despues

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*int main()
{
    char str[] = "Solo quiero esta parte #########";
    
    char *dest = ft_substr(str, 0, 20);
    
    printf("%s", dest);
}
*/
