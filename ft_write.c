#include <stdlib.h>
#include <unistd.h>

void	ft_write(int fdout, char *str, size_t len)
{
	if (write(fdout, str, len) != len)
		abort();
}