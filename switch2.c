#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int vocal;
    printf("Ingrese la vocal para saber su Codigo ASCII\n");
    printf("1. A\n");
    printf("2. a\n");
    printf("3. E\n");
    printf("4. e\n");
    printf("5. I\n");
    printf("6. i\n");
    printf("7. O\n");
    printf("8. o\n");
    printf("9. U\n");
    printf("10. u\n");
    printf("Vocal: ");
    scanf("%i",&vocal);
    switch(vocal)
    {
    case 1:
        printf("ALT + 65");
        break;
    case 2:
        printf("ALT + 97");
        break;
    case 3:
        printf("ALT + 69");
        break;
    case 4:
        printf("ALT + 101");
        break;
    case 5:
        printf("ALT + 73");
        break;
    case 6:
        printf("ALT + 105");
        break;
    case 7:
        printf("ALT + 79");
        break;
    case 8:
        printf("ALT + 111");
        break;
    case 9:
        printf("ALT + 85");
        break;
    case 10:
        printf("ALT + 117");
        break;
    default:
        printf("ERROR\n");

     
	return 0;
}
}
