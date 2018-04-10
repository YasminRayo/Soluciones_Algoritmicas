#include <stdio.h>
int main ()
{
	int dia;
	float segundos;
	dia= 86400;
	printf("Ingrese cantidad de dias: \n");
	scanf("%i", &dia);
	segundos= dia*86400;
	printf("la cantidad de segundos que hay son: %2.f", segundos);
	return 0;
}
