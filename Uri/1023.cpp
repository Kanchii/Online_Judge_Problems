#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <ctype.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main(int argc, char *argv[]){

    int testes;
    bool espaco = false;
    long long int cidade = 1;
    while(cin >> testes && testes != 0){

        if(espaco){
            cout << endl;
        } espaco = true;

        double soma = 0, somaPessoas = 0;
        long long int x, g = testes;
        bool ok = false;
        long long int pessoas[testes], consumoMedio[testes];
        for(int i = 0; i < testes; i++){
            cin >> pessoas[i] >> x;
            soma += x;
            somaPessoas += pessoas[i];
            consumoMedio[i] = (int)(x/pessoas[i]);
        }
        cout << "Cidade# " << cidade << ":" << endl;
        cidade++;
        for(int i = 0; i < g; i++){
            int menor = 1000000;
            int quantMoradores = 0;
            int pos;
            for(int j = 0; j < testes; j++){
                if(consumoMedio[j] <= menor){
                    menor = consumoMedio[j];
                }
            }
            bool f = false;
            for(int j = 0; j < testes; j++){
                if(menor == consumoMedio[j]){
                    quantMoradores += pessoas[j];
                    consumoMedio[j] = 10000000;
                    if(f){
                        g--;
                    } f = true;
                }
            }
            if(ok == false){
                cout << quantMoradores << "-" << menor;
            } else {
                cout << " " << quantMoradores << "-" << menor;
            }
            ok = true;
        }

        double result = (soma*1.0)/(somaPessoas*1.0) - 0.00499999999;

        cout << endl;
        cout << "Consumo medio: " << setiosflags(ios::fixed) << setprecision(2) << result << " m3." << endl;

    }

    return 0;
}
