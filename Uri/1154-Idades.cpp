#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, contagem = 0;
	float media = 0.0;

	while(scanf("%d", &a) && a >= 0){
	    media += a;
		contagem+=1;
	}
 	printf("%.2f\n", media/contagem);

    return 0;
}
