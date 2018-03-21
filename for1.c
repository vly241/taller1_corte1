#include <stdio.h>
#include <stdlib.h>


int main() {
	
int i,j,total;

printf("tablas del 1 al 20:\n");
	for(i=1;i<21;i++)
	{
		for(j=1;j<11;j++)
		{
			total=i*j;
			printf(" %d x %d = %d\n",i,j,total);	
	}
	
	printf("\n");
	}
	return 0;
}
