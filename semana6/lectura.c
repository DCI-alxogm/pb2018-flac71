//Creado por Fernanda Andrade el 12 de septiembre del 2018.
//Este es el ejemplo de lectura de un archivo, en este caso del archivo llamado test.txt.

#include<stdio.h>
int main(){
	FILE*archivo;
	float var1, var2;
	char var[255];

archivo=fopen("test.txt", "r");
	fgets(var,255,(FILE*)archivo);
	printf
