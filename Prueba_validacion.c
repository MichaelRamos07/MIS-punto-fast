#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

char cadena [100];
int validacionEntero (char input[]){
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            printf("Error: La opcion '%s' no es un valor válido.\n", input);
            return 0;
        }
    }
    return 1;
}
int main(void){
    SetConsoleOutputCP(65001);
    int validez;
    int opcion;
    do{

        printf("\n1. Opcion 1");
        printf("\n2. Opcion 2");
        printf("\n0. Salir");
        printf("\nIngrese la opcion: ");
        scanf("%s", cadena);
        validez = validacionEntero(cadena);
        if(validez == 1){
            opcion = atoi(cadena);
        }else{
            opcion = -1;
        }
        switch (opcion)
        {
        case 1:
            printf("Opcion 1 seleccionada\n");
            break;
        case 2:
            printf("Opcion 2 seleccionada\n");
            break;
        default:
            if(opcion == -1 || opcion == 0){
                continue;
            }
            printf("Opcion no valida\n");
            break;
        }
    }while(opcion != 0 );
    return 0;
}

