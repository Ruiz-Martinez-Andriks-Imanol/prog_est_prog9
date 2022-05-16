/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 17/02/2022
   Escuela: Universidad del Valle de Mexico Campus Villahermosa
    Materia: Programación Estructurada
   Ciclo: 01/2022
	Este es un programa de selección en un rango definido de Lenguaje C de la materia de Programación Estructurada
	Muestra el uso de:
    -Variables flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -Condicional if-else
	-Comentarios para la documentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración
	float x;
	printf("Introduce el valor de x (0<x<10): ");
	scanf("%f", &x);
	//Procesos
	if (0<x && x<10){ //Condicional
		printf("x se encuentra dentro del rango\n");		
	} else {
		printf("Valor invalido, x debe estar entre el 1 y el 9\n");
	}
	return 0;
}
