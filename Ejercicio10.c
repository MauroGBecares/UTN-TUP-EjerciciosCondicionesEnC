/*
*
*    para que salgan los acentos en la consola
*   á: 160, é: 130, í: 161, ó: 162, ú: 163,
*   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
* 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
* dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
* consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio utilizando estructura switch).
*
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeroMes;

    printf("Ingrese un n%cmero para saber a que mes corresponde: ", 163);
    scanf("%d", &numeroMes);

    switch (numeroMes)
    {
    case 1: printf("Enero"); break;
    case 2: printf("Febrero"); break;
    case 3: printf("Marzo"); break;
    case 4: printf("Abril"); break;
    case 5: printf("Mayo"); break;
    case 6: printf("Junio"); break;
    case 7: printf("Julio"); break;
    case 8: printf("Agosto"); break;
    case 9: printf("Septiembre"); break;
    case 10: printf("Octubre"); break;
    case 11: printf("Noviembre"); break;
    case 12: printf("Diciembre"); break;

    default: printf("El mes ingresado no es v%clido.", 160); break;
    }
    system("pause");
}