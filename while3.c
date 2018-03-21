#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int i=0;
	int total=0;
	
	while (i<50)
	{
		i=i+2;
		total=total+i;
	}
	
	printf("la suma de numeros impares del 1 a 50 es: %d\n",total);
	
	return 0;
}
