/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

    int numeros = 0;
    int num;
    int acumulador = 0;
    float promedio;

    while(numeros <= 7)
    {
    	printf("Ingrese el número: ");
    	scanf("%d",&num);
    	if(num >= 0)
    	{
    		printf("Ingrese el primer número nuevamente: ");
    		scanf("%d",&num);
    	}
    	acumulador = acumulador + num;
    	numeros++;
    }

    promedio = acumulador / numeros;
	printf("El promedio es: %.2f", promedio);

    return 0;
}
