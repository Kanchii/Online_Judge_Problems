#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int senha = 0;
    bool libera = true;

    while(libera == true){
    scanf("%d", &senha);
    	if(senha != 2002){
    	printf("Senha Invalida\n");
    	} else {
    		libera = false;
    	}
    }

 	printf("Acesso Permitido\n");
    return 0;
}
