#include <stdio.h>
#include <math.h>

int main()
{
	int n;

printf("\n Conversor de medidas (KM P/METRO E VICE VERSA)");	

printf("\n Convertendo KM para METRO:\n");

scanf("%d", &n);

printf("Multiplicando por MIL: %.2d", n * 1000);

printf("\n Convertendo METRO para KM:\n");

scanf("%d", &n);

printf("Dividindo por MIL: %.1d", n / 1000);


}
