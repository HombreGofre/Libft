
#inlcude "libft.h"

//recorrremos el string para saber cuantas palabras tiene mi cadena
int	contador(char	*str, char c)
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
