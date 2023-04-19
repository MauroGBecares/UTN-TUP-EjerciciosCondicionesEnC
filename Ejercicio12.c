/*
 *
 *    para que salgan los acentos en la consola
 *   á: 160, é: 130, í: 161, ó: 162, ú: 163,
 *   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
 *
 * 12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
 * ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
 * que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
 * medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
 * una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
 * Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
 * pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
 * 6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
 * caso contrario informar la situación y finalizar programa. Por último, presentar un
 * resumen de la operación, por ejemplo:
 * DNI: 38.456.123
 * Medio de pago: Tarjeta de crédito
 * Tarjeta: Cabal
 * Cuotas: 3
 * Total: $4784
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float venta = 4600;
    int dni, medioPago, tarjeta, cuotas;

    printf("Ingrese el dni:\n");
    scanf("%d", &dni);
    if (!(dni > 1000000 && dni < 99999999))
        printf("El DNI ingresado no es v%clido\n", 160);
    else
    {
        printf("Ingrese el medio de pago:\n");
        printf("1-Efectivo\n");
        printf("2-Tarjeta de cr%cdito\n", 130);
        scanf("%d", &medioPago);
        if (!(medioPago == 1 || medioPago == 2))
        {
            printf("El medio de pago ingresado no es v%clido\n", 160);
        }
        else
        {
            if (medioPago == 2)
            {
                printf("Ingrese con la tarjeta que va a realizar el pago:\n");
                printf("1-Visa\n");
                printf("2-American Express\n");
                printf("3-Mercado Pago\n");
                printf("4-Cabal\n");
                scanf("%d", &tarjeta);
                if (!(tarjeta >= 1 && tarjeta <= 4))
                {
                    printf("La tarjeta ingresada no es v%clida\n", 160);
                }
                else
                {
                    printf("Ingrese la cantidad de cuotas (1, 3, 6 o 12)\n");
                    scanf("%d", &cuotas);
                    if (!(cuotas == 1 || cuotas == 3 || cuotas == 6 || cuotas == 12))
                    {
                        printf("Las cuotas ingresada no son v%clidas\n", 160);
                    }
                    else
                    {
                        printf("DNI: %d\n", dni);
                        printf("Medio de pago: Tarjeta de cr%cdito\n", 130);
                        if (tarjeta == 1)
                            printf("Tarjeta: Visa\n");
                        else if (tarjeta == 2)
                            printf("Tarjeta: American Express\n");
                        else if (tarjeta == 3)
                            printf("Tarjeta: Mercado Pago\n");
                        else
                            printf("Tarjeta: Cabal\n");

                        if (cuotas == 1)
                        {
                            printf("Cuotas: 1\n");
                        }
                        else if (cuotas == 3)
                        {
                            printf("Cuotas: 3\n");
                            venta = venta * 1.04;
                        }
                        else if (cuotas == 6)
                        {
                            printf("Cuotas: 6\n");
                            venta = venta * 1.08;
                        }
                        else
                        {
                            printf("Cuotas: 12\n");
                            venta = venta * 1.08;
                        }
                        printf("Total: $%0.2f\n", venta);
                    }
                }
            }
            if (medioPago == 1)
            {
                printf("DNI: %d\n", dni);
                printf("Medio de pago: Efectivo\n");
                printf("Tarjeta: Ninguna\n");
                printf("Cuotas: 0\n");
                printf("Total: $%0.2f\n", venta);
            }
        }
    }
}