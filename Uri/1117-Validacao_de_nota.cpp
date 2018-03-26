#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float a, media = 0;
    int erro = 0, numero = 0;
    bool termina = true;

    while(termina){
    	scanf("%f", &a);


    	if(a >= 0 && a<=10){
    		media+=a;
    		numero++;
    	} else {
    		printf("nota invalida\n");
    	}

    	if(numero == 2){
    		termina = false;
    	}

    }

 	printf("media = %.2f\n", media/numero);

    return 0;
}
