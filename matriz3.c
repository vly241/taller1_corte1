#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i=3,j,cuenta,c,vec[9],matriz[3][3],ciclo=0;
				   for ( cuenta = 2 ; cuenta <= 10 ;  )
				   {
				      for ( c = 2 ; c <= i - 1 ; c++ )
				      {
				         if ( i%c == 0 )
				            break;
				      }
				      if ( c==i & ciclo<9)
				      {
				         vec[ciclo]=i;
				         ciclo++;
				         cuenta++;
				      }
				      i++;
				   }  ciclo=0;
				  for (i=0;i<3;i++){
				       for (j=0;j<3;j++){
				           matriz[i][j]=vec[ciclo];
				           ciclo++;
				       }
				  }
				  for (i=0;i<3;i++){
				       for (j=0;j<3;j++){
				           printf("-%i ",matriz[i][j]);
				       }
				      printf("\n")    ;
				   }			
	return 0;
}
