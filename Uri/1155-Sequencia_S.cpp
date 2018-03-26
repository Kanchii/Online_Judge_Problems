#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	float S = 0;
	int i = 1;

	while(i<=100){
		S += (float)1/i;
		i++;
	}

 	printf("%.2f\n", S);
    return 0;
}
