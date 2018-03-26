#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a;
    float b, c, d;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
    	scanf("%f %f %f", &b, &c, &d);

    	printf("%.1f\n", (b*2+c*3+d*5)/10);
    }

    return 0;
}
