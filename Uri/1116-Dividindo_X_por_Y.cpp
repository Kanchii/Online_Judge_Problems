#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n, x, y;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
    	scanf("%d %d", &x, &y);

    	if(y != 0){
    		printf("%.1f\n", (float)x/y);
    	} else {
    		printf("divisao impossivel\n");
    	}
    }


    return 0;
}
