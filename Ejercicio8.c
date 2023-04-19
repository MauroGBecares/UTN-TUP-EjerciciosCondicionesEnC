/*
 *
 *    para que salgan los acentos en la consola
 *   á: 160, é: 130, í: 161, ó: 162, ú: 163,
 *   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
 *
 * 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
 * sea mayor o igual que el importe a retirar.
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float saldo = 100000;
    float retiro;

    printf("Ingrese el monto que desea retirar: ");
    scanf("%f", &retiro);

    if (retiro <= saldo)
    {
        saldo -= retiro;
        printf("Usted retir%c %0.2f. Su saldo actual es %0.2f.", 162, retiro, saldo);
    }
    else
    {
        printf("El monto que quiere retirar es mayor al saldo que tiene.");
    }

    system("pause");
}