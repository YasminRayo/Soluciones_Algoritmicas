#include <stdio.h>
int main()
{
	float galon;
	float precio;
	float gasolina;
	galon= 3.785;
	printf("Ingrese cuantos galones de  gasolina quiere:\n");
	scanf("%f", &galon);
	gasolina= galon*3.785;
	printf("Lo equivalente en gasolina seria: %.2f",gasolina);
	precio= gasolina*820;
	printf("\n");
	printf("El precio de su compra es: %.2f", precio);
	return 0;
}
	
