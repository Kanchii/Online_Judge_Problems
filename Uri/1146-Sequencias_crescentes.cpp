#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, i = 1;
    bool termina = true;

 	while(termina){
 		scanf("%d", &a);

 		if(a == 0){
 			termina = false;
 		} else if(a != 0){
 		printf("%d", i);
 		i++;
 		}

 		while(i <= a){
 			printf(" %d", i);
 			i++;
 		}
 		if(a!=0){
 		printf("\n");
 		i = 1;
 		}
 	}

    return 0;
}
