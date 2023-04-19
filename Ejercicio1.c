/* para que salgan los acentos en la consola
   á: 160, é: 130, í: 161, ó: 162, ú: 163,
   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla.
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float numero1, numero2;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%f", &numero1);
    printf("Ingrese otro n%cmero: ", 163);
    scanf("%f", &numero2);

    if (numero1 > numero2)
        printf("El mayor n%cmero es: %0.2f", 163, numero1);
    else
        printf("El mayor n%cmero es: %0.2f", 163, numero2);
}