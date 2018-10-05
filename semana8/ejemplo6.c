//Creado por Fernanda Andrade el 05 de octubre del 2018.
//Encontrar la suma de 6 números guardados en un arreglo (declarando un apuntador y manipulando como arreglo.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, sum=0;
	int *num;
	printf("Introduce 6 números enteros:\n");

	num=(int*) malloc (sizeof(int));
	for(i=0; i<6; ++i)
	{
	  //(num+i) es equivalente a &num[i]
	  scanf("%d", &num[i]);
	  //*(num+i) es equivalente a num[i]
	  sum +=num[i];
	}
	printf("suma=%d", sum);
return 0;
}
