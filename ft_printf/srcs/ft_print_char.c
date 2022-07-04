#include <unistd.h>

int	ft_print_char (char ch)
{
	return (write (1, &ch, 1));
}
