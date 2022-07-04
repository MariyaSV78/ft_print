#include <unistd.h>

int	ft_print_int_dec (int nbr)
{
	int		j;
	char	ch;

	j = 0;
	if (nbr == -2147483648)
		return (write (1, "-2147483648", 11));
	if (nbr < 0)
	{
		j += write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		j += ft_print_int_dec (nbr / 10);
	ch = "0123456789abcdef"[nbr % 10];
	j += write (1, &ch, 1);
	return (j);
}
