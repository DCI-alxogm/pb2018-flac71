//Creado por Fernanda Andrade el 03 de octubre del 2018.
//Los apuntadores son usados para acceder a la memoria y manipular la dirección asociada a las variables.

#include<stdio.h>
int main(){
	
	int MAX=3;
	int var[]={10, 100, 200};
	int i, *ptr;	//declaración de la variable apuntador.
	//Asignamos la dirección del arreglo al apuntador.
	ptr=&var;
	
	for(i=0; i<MAX; i++){
	 printf("La dirección de la variable var[%d]=%x\n", i, ptr);
	 printf("Valor de la variable var[%d]=%d\n", i, *ptr);
	 ptr++;			//Nos movemos a la siguiente posición de la memoria.
	}
return 0;
}
