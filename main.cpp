//Função Main:
#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int main(void) {
	Vetor *v=vet_cria(3.0,4.0);
	Vetor *p=vet_cria(7.0,6.0);
	char str[100];

	puts(vet_format(vet_soma(v,p),str));
	printf("%.2f\n",vet_norma(v));
	vet_libera(v);
	vet_libera(p);
	return 0;
}
