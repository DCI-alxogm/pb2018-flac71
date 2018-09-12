//Este es un archivo creado por Fernanda Andrade el 10 de septiembre del 2018.
//Este es el ejemplo 4 de arreglos.

#include<stdio.h>

int main(){
	int i, N;
	float numeros[N];

	printf("\n Dame el numero total de datos para trabajar");
	scanf("%i", &N);

	for(i=0;i<N;i++){
	  scanf("%f", &numeros[N]);
	  numeros[i]*=2;	//Multiplica el número dado por 2.
	  printf("%f \n", numeros[i]);	//Imprime el valor del arreglo modificado.
	}
return 0;
}
