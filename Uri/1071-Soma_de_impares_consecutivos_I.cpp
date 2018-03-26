#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a = 0, b = 0, soma;

    scanf("%d %d", &a, &b);

    soma = 0;

    if(a > b){
        if(b%2 == 0){
            b+=1;

            while(b < a){
                soma+=b;
                b+=2;
                }
        } else {
            b+=2;

            while(b < a){
                soma+=b;
                b+=2;
            }
        }
    } else {
        if(a%2 == 0){
            a++;

            while(a < b){
                soma+=a;
                a+=2;
                }
        } else {
            a+=2;

            while(a < b){
                soma+=a;
                a+=2;
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}
