/*
*
*    para que salgan los acentos en la consola
*   á: 160, é: 130, í: 161, ó: 162, ú: 163,
*   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
* 6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
* que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
* que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
* inválida”.
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota;

    printf("Ingrese la nota: ");
    scanf("%f", &nota);

    if (!(nota >= 0 && nota <= 10))
    {
        printf("Nota inv%clida", 160);
    }
    else
    {
        if(nota < 4)
            printf("El alumno ha reprobado.");
        else if (nota < 6)
            printf("El alumnno ha regularizado.");
        else
            printf("El alumno ha promovido.");
    }

    system("pause");
}
