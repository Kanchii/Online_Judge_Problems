#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int i = 3, j = 2;
	float S = 1;

	while(i <= 39){
		S+=(float)i/j;
		i+=2;
		j*=2;
	}

 	printf("%.2f\n", S);
    return 0;
}
