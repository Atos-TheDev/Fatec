#include <stdio.h>
#include <stdlib.h>

float f_vlr_parcela (float d,float p){
	float vlr;
	if (d > 0 && p >0 ){
	vlr = d / p;
}else if (d<=0){
	vlr = -999;
} else if (p <= 0){
	vlr = -998;
}
	
	
	return vlr;
}


int main() {
	float d, p, v;
	printf ("digite o valor da divida: ");
	scanf ("%f", &d);
	printf ("digite o numero de parcelas: ");
	scanf ("%f", &p);
	v = f_vlr_parcela (d, p);
	printf ("o valor de cada parcela eh de %.2f", v);
return 0;	
}


