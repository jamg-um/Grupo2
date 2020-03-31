#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

int es_impar(int num){
    if(num % 2 != 0)
        return 1;
    else
        return 0;
}

int main(void){
	printf("¿Es 32 un número par?\n");
	if(es_par(32))
		printf("Yes\n");
	else
		printf("No\n");
    printf("¿Es 33 un número impar?\n");
	if(es_impar(33))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
