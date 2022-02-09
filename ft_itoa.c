//#include "libft.h"
#include <string.h>
#include <stdlib.h>

int cont(int n) //realizamos un contador para saber la capacidad del char
{
	int	cont;
	
	cont = 0;
	if (n <= 0)
		cont = 1;
	while (n != 0)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int 	sign;
	
	if (sign < 0)
		sign = -1;
	else
		sign = 1;
	len = largo(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (len >= 0)
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len--;
 	}
 	if  (sign == -1)
 		str[0] = '-';
 	return (str);
}
