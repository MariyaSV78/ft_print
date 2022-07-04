#include <unistd.h>

int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_line (char *str)
{
	return (write(1, str, ft_strlen(str)));
}
