#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, n = 1;

	scanf("%d", &a);

	while(n <= a){
		if(a%n == 0){
			printf("%d\n", n);
		}
		n++;
	}

    return 0;
}
