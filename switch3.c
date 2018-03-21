#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int numero;
    printf("Ingrese un numero del 0-9 para ver su codigo ASCII\n");
    printf("Numero: ");
    scanf("%i",&numero);
    switch(numero)
    {
    case 0:
        printf("ALT + 48");
        break;
    case 1:
        printf("ALT + 49");
        break;
    case 2:
        printf("ALT + 50");
        break;
    case 3:
        printf("ALT + 51");
        break;
    case 4:
        printf("ALT + 52");
        break;
    case 5:
        printf("ALT + 53");
        break;
    case 6:
        printf("ALT + 54");
        break;
    case 7:
        printf("ALT + 55");
        break;
    case 8:
        printf("ALT + 56");
        break;
    case 9:
        printf("ALT + 57");
        break;
    default:
        printf("Error\n");
        getch();
        system("cls");
    }
	return 0;
}
