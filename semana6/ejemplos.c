//Creado por Fernanda Andrade el 10 de septiembre del 2018.
//son los tres primeros ejemplos de arreglos.
#include<stdio.h>
int main()
{
	int i, N=10;
	float numeros[N];
	
	printf("\nEste es el ejemplo 1 de arreglos y se usará el ciclo for\n");
	for(i=0;i<N;i++){
	  numeros[i]=0.;	//Asigna 0 a cada elemento del arreglo.
	}

	printf("\nEste es el ejemplo 2\n");
	for(i=0;i<N;i++){
	  scanf("%f", &numeros[i]);	//Asigna el valor a partir de lo que proporciona el usuario, linea por linea.
	}

	printf("\nEste es el ejemplo 3\n");
	for(i=0;i<N;i++){
	  printf("%f \n", numeros[i]);	//Imprime a la pantalla el valor del elemento i=enesimo del arreglo.
	}

 return 0;
}

