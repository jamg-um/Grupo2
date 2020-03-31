#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

int main(void){
	printf("Escribe un numero: ");
	int n;
	scanf("%d", &n);
	if(es_par(n))
		printf("Es par!\n");
	else
		printf("No es par!\n");
	return 0;
}
