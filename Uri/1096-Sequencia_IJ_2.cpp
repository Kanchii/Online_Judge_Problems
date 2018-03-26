#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int i = 1;
    int j = 7;

    while(i < 10){
    	printf("I=%d J=%d\n", i, j);
    	j--;
    	if(j < 5){
    		j = 7;
    		i+=2;
    	}
    }
    return 0;
}
