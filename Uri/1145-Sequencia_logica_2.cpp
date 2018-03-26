#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int x, y, aux = 0, aux2 = 0, i = 1;
    bool termina = true;

    scanf("%d %d", &x, &y);

    while (i < y){
    	printf("%d", i);
    	i++;
    	while(aux2 < x - 1){
    		printf(" %d", i);
    		i++;
    		aux2++;
    	}

    	printf("\n");
    	aux2 = 0;

    }

    return 0;
}
