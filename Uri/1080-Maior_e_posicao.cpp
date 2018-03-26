#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  	int a;
  	int aux = 0;
  	int aux2 = 0;

  	for(int i = 0; i < 100; i++){
  		scanf("%d", &a);

  		if(a > aux){
  		aux = a;
  		aux2 = i;
  		}
  	}


  	printf("%d\n%d\n", aux, aux2 + 1);

    return 0;
}
