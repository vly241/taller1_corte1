#include <stdio.h>
#include <stdlib.h>

struct promedio
{
	float promedio,notas1,notas2,notas3;
	
};

struct estudiante 
{
    char nombre[30];
	float notas1; 
	float notas2;
	float notas3;
	struct promedio p;
}estudiante[5];

int main() {
	int i;
	int y;
			float vectorfinal[5],promedio;
			for(y=0;y<6;++y)
			{
				
				printf("digite  nombre %i:\n",y+1);
				fgets(estudiante[y].nombre,30,stdin);
				printf("-digite nota 1:\n");
				scanf("%f",&estudiante[i].p.notas1);
				printf("-digite nota 2:\n",i+1);
				scanf("%f",&estudiante[i].p.notas2);
				printf("-digite nota 3:\n",i+1);
				scanf("%f",&estudiante[i].p.notas3);
				//fflush(stdin);
				promedio=(estudiante[i].p.notas1+estudiante[i].p.notas2+estudiante[i].p.notas3)/3;
				
			}

	return 0;
}
