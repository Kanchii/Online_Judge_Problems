#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x, z = 0, contagem = 0, a = 0, c = 0;

	scanf("%d\n", &x);

	while(z <= x){
		scanf("%d\n", &z);
	}

	a = z;
	c = x;

	contagem++;
	while(x < a){
		c++;
		x+=c;
		contagem++;
	}

 	printf("%d\n", contagem);
    return 0;
}
