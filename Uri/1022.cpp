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

    int testes;
    int N1, D1, N2, D2;
    int N, D;
    char aux, operacao;

    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> N1 >> aux >> D1 >> operacao >> N2 >> aux >> D2;
        switch(operacao){
            case '+':
                N = (N1*D2 + N2*D1);
                D = (D1*D2);
                break;

            case '-':
                N = (N1*D2 - N2*D1);
                D = (D1*D2);
                break;

            case '*':
                N = (N1*N2);
                D = (D1*D2);
                break;

            default:
                N = (N1*D2);
                D = (N2*D1);
        }

        int Q1 = N, Q2 = D, resto = 1;
        while(resto != 0){
            resto = Q1 % Q2;
            Q1 = Q2;
            Q2 = resto;
        }

        if(resto != 0){
            cout << N << '/' << D << " = " << N << '/' << D << endl;
        } else {
            cout << N << '/' << D << " = " << N/abs(Q1) << '/' << D/abs(Q1) << endl;
        }
    }

    return 0;
}


