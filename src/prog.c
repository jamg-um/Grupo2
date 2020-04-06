#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

void hola(){
	printf("Hola\n");
	return;
}

void respuesta(){
	printf("Vamos a dar la respuesta a la siguiente pregunta\n");
	return;
}

int main(void){
	hola();
	respuesta();
	printf("¿Es 32 un número par?\n");
	if(es_par(32))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
