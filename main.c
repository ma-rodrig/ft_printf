#include "ft_printf.h"

int	main(void)
{
	/*printf("\n");
	printf("%d \n", printf("ola%%"));
	printf("\n");
	ft_printf("%d \n", ft_printf("ola%%"));*/
 
	//ft_printf (" %x, %X", UINT_MAX, UINT_MAX);


	//ft_printf("\n");
	
	ft_printf ("%x, %X, %u,  %x, %X, %u, %x, %X, %u", 10000, 10000, -1, 10000, 10000, -1, 10000, 10000, -1);
	// printf("HELLO\n");
	// printf("%d \n", printf(""));
	// printf("%d \n", printf(NULL));
	// printf("Characters: %c %c\n", 'a', 'b');
	// printf("Strings: %s %s\n", "Good", "bye");
	// printf("Decimal: %d %d\n", 42, 123);
	// printf ("Decimals: %d %ld\n", 1977, 650000L);
	// printf("Pointer nulo: %p \n", NULL );
	// printf("Pointer de x é: %p\n", ptr);
	// printf("Pointer 0: %p %p \n", (void *)0, (void *)0);
	// printf ("Decimal e hexadecimal: %d %x %X \n", 255, 255, 255);
	// printf (" Hexadecimal 0: %x %X\n", 255, 255);
	// printf ("Unsigned int: %u %u\n", 2147483647, UINT_MAX);
	// printf ("Unsigned int: %u \n", UINT_MAX);
	ft_printf("\n");
	ft_printf ("Mix: %c, %s, %d, %i, %x, %X, %u, all mixed\n", 'A', "Mix", 34, 34, 10000, 10000, -1);
	return (0);
}
