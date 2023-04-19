#include <stdio.h>
#include <stdlib.h>

/* 
*    para que salgan los acentos en la consola
*   á: 160, é: 130, í: 161, ó: 162, ú: 163,
*   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
* 5- Escriba un programa que pida ingresar un número y a continuación escriba en la
* consola si el mismo es par o impar.
*/
void main()
{
    int numero1;

    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &numero1);

    if (numero1 % 2 == 0)
    {
        printf("Es par\n");
    }
    else
    {       
        printf("Es impar\n");
    }
    system("pause");
    
}