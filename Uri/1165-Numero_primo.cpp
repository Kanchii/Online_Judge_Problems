#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int testes, a;
    bool primo, nprimo;

    cin >> testes;

    while(testes > 0){
        cin >> a;
        primo = false;
        nprimo = false;

        for(int i = 2; i < a; i++){

            if((float)(a%i == 0)){

                nprimo = true;
                primo = false;
        }
        }
        if(nprimo){
            cout << a << " nao eh primo" << endl;
        } else {
            cout << a << " eh primo" << endl;
        }



        testes--;

    }

    return 0;
}
