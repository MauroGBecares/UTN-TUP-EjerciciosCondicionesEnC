/* para que salgan los acentos en la consola
   á: 160, é: 130, í: 161, ó: 162, ú: 163,
   Á: 181, É: 144, Í: 214, Ó: 224, Ú: 23, ñ: 164, Ñ: 165
*/
/*Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    float num1, num2, num3;

    printf("Ingrese el primer n%cmero\n", 163);
    scanf("%f", &num1);
    printf("Ingrese el segundo n%cmero\n", 163);
    scanf("%f", &num2);
    printf("Ingrese el tercer n%cmero\n", 163);
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("De los n%cmeros ingresados el mayor es: %.2f\n", 163, num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("De los n%cmeros ingresados el mayor es: %.2f\n", 163, num2);
    }
    else
    {
        printf("De los n%cmeros ingresados el mayor es: %.2f\n", 163, num3);
    }
        
    system("pause");

}
