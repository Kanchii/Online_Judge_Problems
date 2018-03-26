#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    long long int testes;
    int anos = 0;

    cin >> testes;

    int PA, PB;
    double G1, G2;

    for(int i = 0; i < testes; i++){

        cin >> PA >> PB >> G1 >> G2;

        while(PA <= PB){
            PA += (PA*G1)/100;
            PB += (PB*G2)/100;
            anos++;

            if(anos > 100){
                break;
            }
        }

        if(anos <= 100){
            cout << anos << " anos." << endl;
        } else {
            cout << "Mais de 1 seculo." << endl;
        }
        anos = 0;
    }

    return 0;
}
