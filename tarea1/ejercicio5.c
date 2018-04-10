#include <stdio.h>
int main()
{
	
	char nombre[180];
	float peso;
	float longitud;
	float libra;
	float pie;
	
	printf("Ingrese el nombre del dinosaurio:");
	scanf("%s", nombre);
	printf("\n");
	printf("Ingrese el numero de libras:");
	scanf("%f", &libra);
	peso= libra*0.45;
	printf("El peso expresado en kilogramos es: %.1f", peso);
	printf("\n");
	printf("Ingrese el numero de pies:");
	scanf("%f", &pie);
	longitud= pie*0.3048;
	printf("La longitud expresada en metros es: %.1f", longitud);
	printf("\n");
	printf("El nombre del dinosaurio es: %s", nombre);
	
  
	return 0;
}
	
	
