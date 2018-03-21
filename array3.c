#include <stdio.h>
#include <stdlib.h>


int main() {
	
int array[4];
int i;
int seg[4],ter[4],cuar[4];

for(i=0;i<4;i++)
{
    printf("Ingrese %i numero: ",i+1);
    scanf("%i",&array[i]);
    seg[i]=pow(array[i],2);
    ter[i]=pow(array[i],3);
    cuar[i]=pow(array[i],4);
}

system("cls");

for(i=0;i<4;i++)
{
    printf("%i     %i        %i         %i   \n",array[i],seg[i],ter[i],cuar[i]);
} 	
	 	
	return 0;
}
