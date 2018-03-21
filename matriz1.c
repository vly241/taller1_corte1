#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j,num,i,suma;
	
	
	
				float matrizuno[3][3];
				float *pun=&matrizuno[0][0];
				
				for (j=0;j<3;j++)
				{
				for(i=0;i<3;i++)
				{
				printf("ingrese el valor en la posicion %d %d\n ",i , j);
				scanf("%d",&num);
				matrizuno[i][j]=num;
				}
				}
		
				for (j=0;j<3;j++)
				{
				for(i=0;i<3;i++)
				{
					printf("el valor de la matriz en la posicion %d,%d es %d\n",i , j,matrizuno[i][j]);
				}
				}

				for (j=0;j<3;j++)
				{
					for(i=0;i<3;i++)
				{
				suma=suma+*pun;
				}
					}
				printf("la suma de las posiciones de los numeros ingresados es: %d",suma);
	return 0;
}
