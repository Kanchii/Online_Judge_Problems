#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, aux = 1, start = 0;

	scanf("%d", &a);

	while(start < a){
		printf("%d %d %d PUM\n", aux, aux+1, aux+2);
		aux+=4;
		start++;
	}

    return 0;
}
