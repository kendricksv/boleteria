#include <stdio.h>
#include <stdlib.h>

int main()
{
    //**Declaro dos variables j e i**//
    int i, j;
    //**Usar for para indicar a el programa si i es igual o menor a 5 siga sumando**//
    for (i = 1; i <= 5; i++) {
            //**Declar la variable j y le damos un valor de 1 y que no sea mayor que i**//
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
