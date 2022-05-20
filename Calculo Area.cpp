#include <stdio.h>

int main ()
{
	int base;
	int altura;
	int area = base*altura;
	
	
	printf ("Digite o valor da base:\n");
	scanf ("%i", &base);
	printf ("Digite o valor da altura:\n");
	scanf ("%i", &altura);
	
	printf ("O valor da area e igual a %i\n", &area);
	
	
	
	return 0; 
}
