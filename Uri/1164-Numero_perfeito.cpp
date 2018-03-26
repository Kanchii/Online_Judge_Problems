#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int testes, a, soma = 0;

    cin >> testes;

    while(testes > 0){

        cin >> a;
        for(int i = 1; i < a; i++){

            if(a%i == 0){
                soma+=i;
            }

        }

        if(soma == a){
            printf("%d eh perfeito\n", a);
        } else {
            printf("%d nao eh perfeito\n", a);
        }
        soma = 0;
        testes--;

    }
    return 0;
}
