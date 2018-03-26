#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
    	scanf("%d", &b);
    	if(b%2 == 0 && b > 0){
            printf("EVEN POSITIVE\n");
        }else if(b%2 == 0 && b < 0){
            printf("EVEN NEGATIVE\n");
        }else if(b%2 != 0 && b > 0){
            printf("ODD POSITIVE\n");
        }else if(b%2 != 0 && b < 0){
            printf("ODD NEGATIVE\n");
        }else if(b == 0){
            printf("NULL\n");
        }
    }

    return 0;
}
