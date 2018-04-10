
#include <stdio.h>

int main()
{
	int sueldo_base, ventas, sueldo_total;
	float comision;
	printf("Ingrese el suelo base:\n");
	scanf("%d",&sueldo_base);
	printf("Ingrese numero de ventas:\n");
	scanf("%d",&ventas);
	comision= (ventas*0.07);
	printf("La comision es de:%.6f",comision);
	sueldo_total= sueldo_base+comision;
	printf("El suelo total que recibe es: %d",sueldo_total);
	return 0;
}

