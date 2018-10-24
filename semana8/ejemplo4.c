//Creado por Fernanda Andrade el 05 de octubre del 2018.
//Este es un ejemplo de la función realloc que se usa en los arreglos.
//REALLOC Si la memoria previamente reservada es insuficiente o es demasiada, es posible ajustarla.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr, i, n1, n2;
	printf("Introduce el numero de elementos n1; \n");
	scanf("%d", &n1);
	printf("Introduce el nuevo número de elementos n2:\n");
	scanf("%d", &n2);
	ptr=(int*) malloc(n1*sizeof(int));

	printf("Dirección de la memoria reservada:\n");

	for(i=0; i<n1; ++i)
	{
	  printf("%x\t", ptr+i);
	}
	ptr=realloc(ptr, n2);
	
	for(i=0; i<n2; ++i)
	{
	  printf("%u\t", ptr+i);
	}
	free(ptr);
return 0;
}
