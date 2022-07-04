#include <unistd.h>

int	ft_print_u_dec (unsigned int nbr)
{
	int		j;
	char	ch;

	j = 0;
	if (nbr > 9)
		j += ft_print_u_dec (nbr / 10);
	ch = "0123456789abcdef"[nbr % 10];
	j += write (1, &ch, 1);
	return (j);
}
