#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

 	int i = 1;
 	int aux, aux2;
 	int j = 60;

 	while(j >= 0){
 		aux = i;
 		aux2 = j;
 		printf("I=%d J=%d\n", aux, aux2);
 		i+=3;
 		j-=5;
 	}

    return 0;
}
