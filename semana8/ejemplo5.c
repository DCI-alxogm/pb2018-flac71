//Creado por Fernanda Andrade el 05 de octubre del 2018.
//Ejemplo 1 del tema de arreglos y puntadores: encontrar la suma de 6 números guardados en un arreglo. (Declarando un arreglo y manipulandolo como apuntador).

#include<stdio.h>
int main()
{
	int i, num[6], sum=0;

	printf("Introduce 6 números enteros:\n");
	for(i=0; i<6; ++i)
	{
	  //(num+i) es equivalente a &num[i]
	  scanf("%d", (num+i));
	
	  // *(num+i) es equivalente a &num[i]
	  sum+= *(num+i);
	}
	printf("Suma=%d", sum);
return 0;
}

