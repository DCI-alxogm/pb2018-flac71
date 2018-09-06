//Creado por Fenanda Andrade el 05 de septiembre del 2018.
//Haz un programa que evalúe las funciones: exponencial (exp), logaritmo (log), seno (sin), coseno (cos), y raíz cuadrada (sqrt) de la variable x, en un intervalo y con espaciado definido por el usuario.

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,s,c,t,x,final,inicial,esp;
	int n, i;
	
	
	printf("\n Introduce el valor inicial\n");
	scanf("%f", &inicial);
	printf("\nIntroduce el valor final\n");
	scanf("%f", &final);
	printf("\n Introduce el espaciado en el que quieres que se realicen las operaciones\n");
	scanf("%f", &esp);
	
	n=(final-inicial)/esp;
	
	for(i=0;i<=n;i++){
		x=(inicial+(esp*i));

	printf("\nAhora podemos empezar a evaluar\n");
	
	a=exp(x);
	printf("%f\n",a);
	b=log(x);
	printf("%f\n",b);
	s=sin(x);
	printf("%f\n", s);
	c=cos(x);
	printf("%f\n", c);
	t=sqrt(x);
	printf("%f\n", t);
	
printf("Hemos terminado con el programa"); 
}
	
	return 0;
}



