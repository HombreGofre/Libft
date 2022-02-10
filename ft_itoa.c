//#include "libft.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*long int    ft_abs(long int nbr)
{
    return ((nbr < 0) ? -nbr : nbr);
}*/

char  *str2(char *str, int n, int len)
{
      while (n > 0)
    {
        str[len] = 48 + (n % 10);
        n = n / 10;
        len--;
    }
    return (str);
}

int largo(int    n) //realizamos un contador para saber la capacidad del char
{
    int    len;
    
    len = 0;
    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        len++;
        n = n / 10;
    }
    return (len);
    
}

char    *ft_itoa(int n)
{
    char    *str;
    long int        len;
    int     sign;
    
    sign = 1;
    len = largo(n);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    str[len--] = '\0';
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        sign *= -1;
        n = n * -1;
        str[0] = '-';
    }
    
    str = str2(str, n, len);
    
    /*while (len >= 0)
    {
        str[len] = 48 + (n % 10);
        n = (n / 10);
        len--;
     }*/
     return (str);
}

int main ()
{
    char    *str1;
    str1 = ft_itoa(2287145887);
    
    printf("%s", str1);
}
