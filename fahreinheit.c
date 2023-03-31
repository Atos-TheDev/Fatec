#include <stdio.h>
#include <stdlib.h>




int main() {
	float celsius, fah;
	int cont;
	cont = 1;
	while (cont !=0){
		system ("cls");	
		printf ("digite o valor em graus celsius: ");
		scanf ("%f", & celsius);
		
	if (celsius < -32 || celsius > 480){
		printf ("digite um valor entre -32 e 480.");
	}else {
	fah = celsius * 9.0f/5.0f +32;
	printf ("o valor de %.2f graus celsius convertido eh: %.2f fahrenheits.", celsius, fah);
	}
	
	printf ("\n -----------------------------------------------------------");
	printf ("\n\ndeseja rodar novamente?\n1=sim 0=nao\n");
	scanf ("%i", &cont);
	
}
return 0;	
}
