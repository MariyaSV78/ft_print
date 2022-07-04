#include <stdlib.h>
#include <unistd.h>

int	print_str (char *s, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == '0')
		i++;
	j += write (1, "0x", 2);
	while (i < len)
		j += write (1, s + i++, 1);
	return (j);
}

int	ft_print_pointer (void *pointer)
{
	int			j;
	int			i;
	int			len;
	intptr_t	p;
	char		*s;

	if (pointer == NULL)
		return (write (1, "(nil)", 5));
	p = (intptr_t)pointer;
	len = 2 * sizeof (pointer);
	i = len;
	s = (char *) malloc (len);
	while (i > 0)
	{
		i--;
		s[i] = "0123456789abcdef"[p & 0x0F];
		p >>= 4;
	}
	j = print_str (s, len);
	free (s);
	return (j);
}
