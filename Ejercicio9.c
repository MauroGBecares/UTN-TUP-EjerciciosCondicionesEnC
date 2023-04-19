/*
*
*    para que salgan los acentos en la consola
*   á: 160, é: 130, í: 161, ó: 162, ú: 163,
*   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
* 9- Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
* o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
* altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
* es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”
*
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float alturaPersona;

    printf("Ingrese la altura de la persona(en cent%cmetros): ", 161);
    scanf("%f", &alturaPersona);

    if (alturaPersona <= 150)
        printf("Persona de altura por debajo de la media");
    else if (alturaPersona < 170)
        printf("Persona de altura media");
    else
        printf("Persona de altura por arriba de la media");

    system("pause");
}