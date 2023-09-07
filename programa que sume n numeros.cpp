// Programa que sume n numeros
#include <stdio.h>
#include <math.h>
int main(){
	int cantidad,valores,cero=0, s=0;

printf("Por favor ingrese la cantidad de numeros que necesite");
scanf("%d",&cantidad);

while (cero <cantidad){
	printf("Ingrese su numero: ");
	scanf ("%d",& valores);
	
	s=s+valores;
	cero=cero+1;	
}

printf("Su resultado es el siguiente: %d",s );

return 0;
printf("\a");	
} 

