
#include <stdio.h>

int main()
{
	int costo_boleto,costo_kilometro;
	float kilometros;
	printf("Ingrese cantidad de kilometros por recorrer:\n");
	scanf("%f",&kilometros);
	printf("El valor por kilometro es:\n");
	scanf("%d",&costo_kilometro);
	costo_boleto=kilometros*costo_kilometro;
	printf("El costo del boleto es:%d",costo_boleto);
	return 0;
}

