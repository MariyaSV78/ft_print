#include <stdlib.h>
#include <unistd.h>

char	*ft_toupper(char *s, unsigned int len)
{
	while (len > 0)
	{
		len--;
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] += 'A' - 'a';
	}
	return (s);
}

int	print_nbr (char *s, unsigned int len)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (s[i] == '0' && i < 2 * len - 1)
		i++;
	while (i < 2 * len)
		j += write (1, s + i++, 1);
	return (j);
}

int	ft_print_hexa (unsigned int nbr, char a)
{
	int				j;
	unsigned int	i;
	unsigned int	len;
	char			*s;
	unsigned char	*p;

	p = (unsigned char *)&nbr;
	len = sizeof (nbr);
	s = (char *)malloc (2 * len);
	i = len;
	while (i > 0)
	{
		i--;
		s[2 * (len - i) - 2] = "0123456789abcdef"[*(p + i) / 16];
		s[2 * (len - i) - 1] = "0123456789abcdef"[*(p + i) % 16];
	}
	if (a == 'X')
		s = ft_toupper (s, 2 * len);
	j = print_nbr (s, len);
	free (s);
	return (j);
}
