#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, b, c = 1;

	scanf("%d", &a);

	while(a > 1){
		b=a*(a-1);
		c *= b;
		a-=2;
	}

 	printf("%d\n", c);
    return 0;
}
