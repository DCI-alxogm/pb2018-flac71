//creado por Fernanda Andrade el 05 de octubre del 2018.
//Uso de apuntadores.

#include<stdio.h>
int main()
{
	int var=20; //declaración de la variable.
	int *ip;	//declaración de la variable apuntador.
	*ip=&var;	// asigna  la dirección de la variable var al apuntador ip*.
	
	printf("la dirección de la variable var es: %x\n", (int) &var);
	printf("Dirección guardada en el apuntador ip: %x\n", (int) ip);
	printf("El valor de *ip:%d\n", *ip);
return 0;
}
