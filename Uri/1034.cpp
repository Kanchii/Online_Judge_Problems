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
#include <cstddef>
#define INT_MAX 1000000

using namespace std;

int coinsChange(vector<int> C, int change)
{
    vector<int> S(change + 1,INT_MAX);
    S[0] = 0;
    for(int i = 1; i <= change ; i++)
    {
        for(int j =0;j<C.size(); j++)
        {
            if(i >= C[j] && 1 + S[i-C[j]] < S[i])
            {
                S[i] = 1 + S[i - C[j]];
            }
        }
    }
    return S[change];
}


int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    long long int troco, quantMoedas, testes, x;

    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> quantMoedas >> troco;

        vector<int> vet;

        for(int j = 0; j < quantMoedas; j++){
            cin >> x;
            vet.push_back(x);
        }

        int min_moedas = coinsChange(vet, troco);

        cout << min_moedas << endl;
    }


    return 0;
}
