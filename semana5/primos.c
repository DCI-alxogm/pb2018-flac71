//Creado por Fernanda Andrade el 07 de Septiembre del 2018.
//Encuentra e imprime todos los números primos en un intervalo definido por el usuario. El intervalo no debe de ser mayor a 100 numeros primos, imprime los números a la pantalla en renglones de 20 números máximo. Si no es el caso pide al usuario que ingrese un nuevo intervalo.

#include<stdio.h>
#include<math.h>
int main(){
	int inicial, final, intervalo, numero, primo, contador, i, j;
	
	printf("\nEste programa calcula los números primos en un intervalo no mayor a 100\n");	
	printf("\nIntroduzca el número inicial y el número final\n");
	scanf("%i %i", &inicial, &final);

	intervalo=(final-inicial);
	while(intervalo>100){
	printf("\nEste intervalo es mayor al aceptado, favor de introducir otras cantidades\n");
	scanf("%i %i", &inicial, &final);}

	for(i=inicial;i<=final;i++){
	numero= sqrt(i);
	primo=1;
	for(j=2;j<=numero;j++){

	   if(primo==1){
		printf("%i",i);}
}
}

	//Para los 20 datos por linea y salto de línea.
	contador=contador+1;
	if(contador==20){
	printf("\n");

	}
return 0;
}
