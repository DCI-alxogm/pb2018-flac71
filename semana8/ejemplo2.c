//Ejemplo creado por Fernanda Andrade el 03 de octubre del 2018.
//Manejo dinámico de la memoria asignada a un arreglo. (Función malloc()).

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, *ptr, sum=0;
	ptr=(int*) malloc(num*sizeof(int));	//memoria reservada usando malloc.

	printf("Introduce el número de elementos: \n");
	scanf("%d", &num);

	if(ptr==NULL)
	{
	   printf("Error! memoria no reservada.");
	   exit(0);
	}
	
	printf("Introduce los elementos del arreglo: \n");
	for(i=0; i<num; ++i)
	{
		scanf("%d", ptr+i);
		sum+= *(ptr+i);
	}
	
	printf("Sum=%d", sum);
	free(ptr);	//Para liberar espacio.
	return 0;
}
