
#include <stdio.h>

int main()
{
	printf("Sistema de entrega de matriculas y promedio de calificaciones\n");
	int totaldenotas, matricula;
	float c1 ,c2 ,c3 , suma, promedio;
	totaldenotas = 3;
	
	printf("Ingrese su numero de matricula:");
	scanf("%d", &matricula);
	printf("ingrese calificacion 1:");
	scanf("%f", &c1);
	printf("\n");
	printf("ingrese calificacion 2:");
	scanf("%f", &c2);
	printf("\n");
	printf("ingrese calificacion 3:");
	scanf("%f", &c3);
	printf("\n");
	suma = c1+c2+c3;
	promedio=suma/totaldenotas;
	printf("Su numero de matricula es: %d\n", matricula);
	printf("su promedio de notas es: %.1f", promedio);
	return 0;
}
	


	
	
	
	
	
	


