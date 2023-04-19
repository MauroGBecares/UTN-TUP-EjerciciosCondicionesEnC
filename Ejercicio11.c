/*
*
*    para que salgan los acentos en la consola
*   á: 160, é: 130, í: 161, ó: 162, ú: 163,
*   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*
* 11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
* Luego presentar el siguiente menú:
* 1. Informar su suma
* 2. Informar su resta
* 3. Informar su multiplicación
* 4. Informar su división
* 5. Salir
* Seleccione una operación:
* Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
* programa debe terminar.
*
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float numero1, numero2, resultado;
    int seleccionarOperacion;

    printf("Ingrese el primer n%cmero: ", 163);
    scanf("%f", &numero1);
    printf("Ingrese el segundo n%cmero: ", 163);
    scanf("%f", &numero2);
    printf("Seleccione una operaci%cn:\n", 162);
    printf("1. Informar su suma\n");
    printf("2. Informar su resta\n");
    printf("3. Informar su multiplicaci%cn\n", 162);
    printf("4. Informar su divisi%cn\n", 162);
    printf("5. Salir\n");
    scanf("%d", &seleccionarOperacion);

    switch (seleccionarOperacion)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("El resultado de la operaci%cn es %0.2f\n",162, resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("El resultado de la operaci%cn es %0.2f\n",162, resultado);
        break;
    case 3:
        resultado = numero1 * numero2;
        printf("El resultado de la operaci%cn es %0.2f\n",162, resultado);
        break;
    case 4:
        if (numero2 != 0)
        {
            resultado = numero1 / numero2;
            printf("El resultado de la operaci%cn es %0.2f\n",162, resultado);
        }
        else
            printf("No se puede dividir por 0\n");
        break;
    default:
        break;
    }
    printf("Fin del programa\n");
    system("pause");
}