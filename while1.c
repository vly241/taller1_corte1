#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int total=0;
	int i=0;
	
						
	while (i<100)
	{
		i=i+1;
		total=total+i;
	}
	
					
	printf("la suma de los numeros de 1 a 100 es: %d\n",total);
	return 0;
}
