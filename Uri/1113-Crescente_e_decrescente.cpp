#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b;
    bool libera = true;

    while(libera == true){
    	scanf("%d %d", &a, &b);
    	if(a > b){
    		printf("Decrescente\n");
    	} else if(a < b){
    		printf("Crescente\n");
    	} else if(a == b){
    		libera = false;
    	}
    }

    return 0;
}
