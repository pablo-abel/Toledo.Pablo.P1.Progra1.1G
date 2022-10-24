#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(float precio);

int main()
{
    float precio = 10.00;

    printf("%.2f\n", aplicarAumento(precio));
    return 0;
}

float aplicarAumento(float precio)
{
    float aumento;
    float precioFinal;

    aumento = (precio * 5) / 100;
    precioFinal = precio + aumento;
    return precioFinal;
}

int remplazarCaracteres(char cadena[][20], int tam, char x, char y)
{
    int cantidad = 0;

    if(cadena != NULL && tam > 0)
    {
        for(int i = 0; i < tam; i ++)
        {
            if(cadena[i] )
        }
    }

    return cantidad;
}
