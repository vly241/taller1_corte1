#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 int i;

float n_decimales[4]={32.583,11.239,45.781,22.237};

float *P_n_decimales=&n_decimales[0];



for(i=0;i<4;i++)
{
	
	printf("%.3f\n",P_n_decimales[i]);

}


	return 0;
}
