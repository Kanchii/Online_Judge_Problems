#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <sstream>
#include <algorithm>
#include <strstream>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

using namespace std;

int main(){
    int quantPessoas;

    while(cin >> quantPessoas && quantPessoas != 0){
        vector<int> fila;
        vector<int> primos;
        for(int i = 0; i < quantPessoas; i++){
            fila.push_back(i+1);
        }
        int cont = 0;
        for(int i = 2; cont < quantPessoas; i++){
            bool primo = false;
            if(i%2 != 0 || i == 2){
                primo = true;
                for(int j = (int)sqrt(i); j > 1; j--){
                    if(i%j == 0 && j != i){
                        primo = false;
                        break;
                    }
                }
            }
            int aux = i;
            if(primo){
                aux--;
                primos.push_back(aux);
                cont++;
            }
        }
        int p = 0;
        int pos = 0;
        while(fila.size() > 1){
            int pulo = primos[p];
            pos += pulo;
            p++;
            if(pos >= fila.size()){
                pos = (pos%fila.size());
            }

            fila.erase(fila.begin() + pos);

        }

        cout << fila[0] << endl;
        fila.clear();
    }


    return 0;
}
