/*Este es un ejemplo de for, creado por Fernanda Andrade el 03 de septiembre del 2018*/
//Añade una instrucción while para que el usuario pueda pedir ejecutar el programa nuevamente. Y haz que el usuario pueda definir las Temperatuas inicial (Temp_C), final (final) y numero de pasos (n).
#include<stdio.h>
#include<math.h>
int main (){
	float TK,TC,final,delta;
	int n,i;
	int op=1;
	while(op==1){
	printf("\n Añade la Temperatura inicial, Temperatura final y el número de veces que quieres que se realice la operación (n)\n");
	scanf("%f", &TC);
	scanf("%f", &final);
	scanf("%i", &n);
	printf("\n Ahora realicemos las operaciones\n");
	delta=(final-TC)/n;
	printf("%f", delta);
	for(i=0;i<n;i++){
		TK=TC+273.15;
		printf("%f\n", TK);
		TC=TC+delta;	//	TC+=delta;
	}

	printf("\n¿Deseas ejecutar de nuevo el programa? Presiona 1, Si no, presiona 2\n");
	scanf("%i", &op);
}
	return 0;
}
		
