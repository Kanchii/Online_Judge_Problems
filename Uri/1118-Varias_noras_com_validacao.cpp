#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float a, media = 0;
    int erro = 0, numero = 0, re;
    bool termina = true, fechaWhile = true;

    while(termina){
    	scanf("%f", &a);


    	if(a >= 0 && a<=10){
    		media+=a;
    		numero++;
    	} else {
    		printf("nota invalida\n");
    	}

    	if(numero == 2){
    		fechaWhile = true;
    		printf("media = %.2f\n", media/numero);
    		printf("novo calculo (1-sim 2-nao)\n");
    		while(fechaWhile){
    		scanf("%d", &re);
    		if(re == 1){
    			numero = 0;
    			media = 0;
    			fechaWhile = false;
    		} else if(re == 2){
    			termina = false;
    			fechaWhile = false;
    		} else {
    			printf("novo calculo (1-sim 2-nao)\n");
    		}
    		}
    	}

    }



    return 0;
}
