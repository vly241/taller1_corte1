#include <stdio.h>
#include <stdlib.h>
 
 
 	struct promedio
 {
 	float nota1;
 	float nota2;
 	float nota3;
 };
 

 struct alumno
 {
 	char nombre[20];
 	char sexo[10];
 	int edad;
 	struct promedio alumno;
 }*p_estudiante[0];


int main() {
	int i;
	float suma=0, promediot=0;
	
	p_estudiante[i]=(struct alumno*)malloc(sizeof(struct alumno));
	
	printf("*****BIENVENIDO*****\n");
	printf("Ingrese los siguientes datos para un alumno:\n");
	
	printf("Nombre:");
	gets(p_estudiante[i]->nombre);
	fflush(stdin);
	
	printf("Edad:");
	scanf("%i", &p_estudiante[i]->edad);
	fflush(stdin);
	
	printf("Sexo:");
	gets(p_estudiante[i]->sexo);
	fflush(stdin);
	
	system("PAUSE");
	system("cls");
	
	printf("Ahora debera ingresar sus tres notas y como resultado le daremos su promedio.\n");
	
	printf("1. nota 1:");
	scanf("%f", &p_estudiante[i]->alumno.nota1);
	fflush(stdin);
	
	printf("2. nota 2:");
	scanf("%f", &p_estudiante[i]->alumno.nota2);
    fflush(stdin);
	
	printf("3. nota 3:");
	scanf("%f", &p_estudiante[i]->alumno.nota3);
    fflush(stdin);
	
	suma=p_estudiante[i]->alumno.nota1+p_estudiante[i]->alumno.nota2+p_estudiante[i]->alumno.nota3;
	promediot=suma/3;
	
	printf("Su promedio es: %.1f\n",promediot);
	printf("Nombre: %s\n",p_estudiante[i]->nombre);
	printf("Edad: %i\n", p_estudiante[i]->edad);
	printf("Sexo: %s\n", p_estudiante[i]->sexo);
	return 0;
}
