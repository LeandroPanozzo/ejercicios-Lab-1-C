#include <stdio.h>
#include <conio.h>
/*Ejercicio 2.2) Una farmacia hace el 15% de descuento sobre los precios de la 
lista oficial. Hacer un programa que permita ingresar por teclado el precio de 
lista de un determinado artículo y la cantidad de unidades compradas por un determinado cliente. 
Luego calcular e informar por pantalla el total a pagar aplicando el descuento respectivo. 
Por ejemplo: Precio del artículo: $5.-. Cantidad de Unidades: 2. Total a Pagar: $ 8,50. */
int main(){

    const float Descuento = 0.15; //Asignamos una constante con el valor del descuento en decimal
    float PrecioLista, PrecioTotal; //Declaramos dos flotantes PrecioLista y PrecioTotal
    int CantidadProducto; //Declaramos el entero CantidadProducto

    printf("Ingrese el precio de lista del articulo: "); //Mostramos "Ingrese el precio de lista del articulo:"
    scanf("%f",&PrecioLista); //Guardamos lo ingresado por consola en  la variable PrecioLista
    printf("Ingrese la cantidad a llevar del articulo: ");
    scanf("%i",&CantidadProducto); //Guardamos lo ingresado por consola en  la variable CantidadProducto

    PrecioTotal = PrecioLista * CantidadProducto;  //Al PrecioLista lo multiplicamos por CantidadProducto
    printf("El total a pagar, con el descuento aplicado, es del: %.2f", PrecioTotal - PrecioTotal*Descuento); //Mostramos la operaciÃ³n  de restar el PrecioTotal - PrecioTotal * Descuento (Para obtener el descuento)



    return 0;
}
