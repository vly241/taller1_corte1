#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, num, aux;
	int num2;
	printf("Ingrese dos numeros para llenar los arreglos y conformar una matriz.");
	printf("\nIngrese el primer arreglo:");
	scanf("%d",&num);
	printf("Ingrese el segundo arreglo:");
	scanf("%d",&num2);
	printf("La dimension sera de %d x %d.\n",num,num2);
	for(i=0;i<num;i++){
		printf(" 0 ",i);
		for(j=1;j<num2;j++){
			printf("1 ",j);
		}
		printf("\n");
	}
	printf("\nLos ceros seran las filas y los unos las columnas.\n");
	printf("El arreglo de dos dimensiones quedo hecho.");
	return 0;
}
