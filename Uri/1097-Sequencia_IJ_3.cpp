#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int i = 1;
	int j = 7;
	int k = 7;

	while(i < 10){
		printf("I=%d J=%d\n", i, j);
		j--;
		if(j<k-2){
			k+=2;
			i+=2;
			j = k;
		}
	}

	return 0;
}
