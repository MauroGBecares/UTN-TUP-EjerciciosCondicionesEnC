/*
 *
 *    para que salgan los acentos en la consola
 *   á: 160, é: 130, í: 161, ó: 162, ú: 163,
 *   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
 *
 * 7- Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
 * un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
 * dicha situación.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float venta;

    printf("Ingrese el valor de la venta: ");
    scanf("%f", &venta);

    if (!(venta > 0))
    {
        printf("El valor no es v%clido", 160);
    }
    else
    {
        if (venta >= 100000)
            venta = venta * 0.85;
        else
            venta = venta * 0.90;

        printf("El valor total de la venta es $%0.2f", venta);
    }

    system("pause");
}