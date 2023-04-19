/* para que salgan los acentos en la consola
   á: 160, é: 130, í: 161, ó: 162, ú: 163,
   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*/
/* Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Ingrese un n%cmero\n", 163);
    scanf("%f", &num);

    if (num > 0)
    {
        printf("El n%cmero ingresado es positivo.\n", 163);
    }
    else if (num == 0)
    {
        printf("El n%cmero ingresado es nulo.\n", 163);
    }
    else
    {
        printf("El n%cmero ingresado es negativo.\n", 163);
    }
    system("pause");
    return 0;
}
