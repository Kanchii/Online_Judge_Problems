#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b;
    bool termina = true;

    while(termina){
    	scanf("%d %d", &a, &b);

    	if(a > 0 && b > 0){
    		printf("primeiro\n");
    	} else if(a < 0 && b > 0){
    		printf("segundo\n");
    	} else if(a < 0 && b < 0){
    		printf("terceiro\n");
    	} else if(a > 0 && b < 0){
    		printf("quarto\n");
    	} else if(a == 0 || b == 0){
    		termina = false;
    	}
    }

    return 0;
}