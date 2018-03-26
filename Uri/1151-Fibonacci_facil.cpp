#include <iostream>
#include <stdio.h>

int main() {

	int a, b = 0, c = 1, d = 1, aux = 1;

	scanf("%d", &a);

	printf("0 ");

	while(aux < a){
		printf("%d", d);
		d = b+c;
		b = c;
		c = d;
		aux++;
		if(aux < a){
		printf(" ");
		}
	}
 	printf("\n");
    return 0;
}
