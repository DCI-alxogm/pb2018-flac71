//Ejemplo creado por Fernanda Andrade el 12 de septiembre del 2018.

#include<stdio.h>

int main()
{
	int j,n;

	printf("\nDime el numero de elementos para trabajar\n");
	scanf("%i", &n);
	float numeros[n];	//No es la forma óptima de hacer una reserva de memoria dinámica.

	for(j=0;j<n;j++){
	scanf("%f", &numeros[j]);
	numeros[j]*=2;
	printf("%f\n", numeros[j]);
	}
return 0;
}
