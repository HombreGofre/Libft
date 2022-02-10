
//#include "libft.h"

void	ft_puthar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
