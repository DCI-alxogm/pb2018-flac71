//Creado por Fernanda Andrade el 05 de octubre del 2018.
//Este es un ejemplo de calloc.
//CALLOC reserva bloques de memoria todos del mismo temaño y los inicializa a cero.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, *ptr, sum=0;
	
	printf("Introduce el numero de elementos: \n");
	scanf("%d", &num);
	
	ptr=(int*)calloc(num, sizeof(int));
	
	if(ptr==NULL)
	{
	  printf("Error! memoria no reservada\n");
	  exit(0);
	}
	
	printf("introduce los elementos del arreglo: \n");
	for(i=0; i<num; ++i)
	{
	  scanf("%d", ptr+i);
	  sum+= *(ptr+i);
	}
	printf("Sum=%d", sum);
	free(ptr);	//Para liberar espacio terminado el programa.
return 0;
}
