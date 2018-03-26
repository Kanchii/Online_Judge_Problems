#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, aux = 1;

    scanf("%d", &a);

    while(aux <= a){
    	printf("%d %d %d\n", aux, aux*aux, aux*aux*aux);
    	aux++;
    }

    return 0;
}
