#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, aux = 1, aux2 = 1, aux3 = 1, i = 0;

    scanf("%d", &a);

    	while(i < a){
 		printf("%d %d %d\n", aux, aux*aux ,aux*aux*aux);
 		aux2 = aux*aux;
 		aux3 = aux*aux*aux;
 		printf("%d %d %d\n", aux, aux2+1, aux3+1);
 		aux++;
 		i++;
 		}
    return 0;
}
