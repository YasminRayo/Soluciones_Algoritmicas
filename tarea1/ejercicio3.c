#include <stdio.h>

int main()

{
	float cateto1,cateto2;
	float a,b,c;
	
	printf("Ingrese el valor del cateto1: ");
	scanf("%f",&cateto1);
	printf("Ingrese el valor del cateto2: ");
	scanf("%f",&cateto2);
	a=cateto1*cateto1;
	b=cateto2*cateto2;
	c=a+b;
	printf("\n");
	printf("El valor de c es: raiz de %.2f",c);
	
	return 0;
	
}
