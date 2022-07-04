//#include "ft_printf.c"
#include "ft_printf.h"
#include <stdio.h>

void	main()
{
	int N1, N2;

	{
	char line[] = "\n printing succeeded \n";
	N1 = printf (line);
	N2 = ft_printf (line);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
//--------------------------------character %c -------------------------------------
	{
	printf ("--------------------------------character c -------------------------------------");
	char line[] = "\n printing one character %c succeeded \n";
	N1 = printf (line, '5');
	N2 = ft_printf (line, '5');
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one character %c succeeded \n";
	N1 = printf (line, 'b');
	N2 = ft_printf (line, 'b');
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

	{
	printf ("--------------------------------string s -------------------------------------");
	char line[] = "\n printing %s succeeded \n";
	N1 = printf (line, "one line");
	N2 = ft_printf (line, "one line");
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
//--------------------------------pointer %p -------------------------------------
	{
	printf ("--------------------------------pointer p -------------------------------------");
	char line[] = "\n printing one pointer %p succeeded \n";
	int x0 = -1;
	void	*x = &x0;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
		{
	char line[] = "\n printing one pointer %p succeeded \n";
	int x0 = -1;
	void	*x = NULL;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

//-------------------integer %i--------------------------------------------------
	{
	printf ("--------------------------------integer i -------------------------------------");
	char line[] = "\n printing one integer %i succeeded \n";
	int i = 1;
	N1 = printf (line, i);
	N2 = ft_printf (line, i);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

	{
	char line[] = "\n printing one integer %i succeeded \n";
	int i = -2147483648;
	N1 = printf (line, i);
	N2 = ft_printf (line, i);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

	{
	char line[] = "\n printing one integer %i succeeded \n";
	int i = -0x1A;
	N1 = printf (line, i);
	N2 = ft_printf (line, i);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	
	{
	char line[] = "\n printing one integer %i succeeded \n";
	N1 = printf (line, 1685);
	N2 = ft_printf (line, 1685);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	
	{
	char line[] = "\n printing one integer %i succeeded \n";
	N1 = printf (line, -685);
	N2 = ft_printf (line, -685);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

//--------------------------------hexadecimal %x -------------------------------------
	{
	printf ("--------------------------------hexadecimal x -------------------------------------");
	char line[] = "\n printing one hexadecimal %x succeeded \n";
	int x = -1;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

	{
	char line[] = "\n printing one hexadecimal %x succeeded \n";
	int x = 0;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %x succeeded \n";
	int x = 0xA;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %x succeeded \n";
	int x = 0x31A;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %x succeeded \n";
	int x = 675;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	//--------------------------------decimal %d -------------------------------------
	{
	printf ("--------------------------------decimal d -------------------------------------");

	char line[] = "\n printing one decimal %d succeeded \n";
	int x = -1000000000;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one decimal %d succeeded \n";
	int x = 145;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	//--------------------------------unsigned_decimal %u -------------------------------------
	{
	printf ("--------------------------------unsigned_decimal u -------------------------------------");
	char line[] = "\n printing one decimal %u succeeded \n";
	int x = -1;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one decimal %d succeeded \n";
	int x = 145;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}

//--------------------------------%%--------------------------------------------------
	{
	printf ("--------------------------------%% -------------------------------------");
	char line[] = "\n printing one line with %% succeeded \n";
	N1 = printf (line);
	N2 = ft_printf (line);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	
	//--------------------------------bad format--------------------------------------------------
	{
	printf ("--------------------------------bad format -------------------------------------");
	char line[] = "\n printing one line with %t succeeded \n";
	N1 = printf (line);
	N2 = ft_printf (line);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	
	printf ("--------------------------------hexadecimal X -------------------------------------");
	{
	char line[] = "\n printing one hexadecimal %X succeeded \n";
	int x = -1;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %X succeeded \n";
	int x = 0;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %X succeeded \n";
	int x = 0xA;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %X succeeded \n";
	int x = 0x31A;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
	{
	char line[] = "\n printing one hexadecimal %X succeeded \n";
	int x = 675;
	N1 = printf (line, x);
	N2 = ft_printf (line, x);
	printf ("\n\t number of characters printf = %i, ft_printf = %i\n", N1, N2);
	}
}