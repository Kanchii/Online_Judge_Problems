#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <cctype>
#include <stdlib.h>
#include <set>
#include <stdio.h>

using namespace std;
int cont = 0;
bool geral = false;

int fib(int n){
    if(geral){
        cont++;
    } geral = true;
    if(n <= 1){
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}


int main(){

    int numFib;
    int testes;
    bool arruma = false;
    int x, y;
    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> numFib;
        fib(numFib);
        if(arruma){
            y = cont - 1;
        } else {
            y = cont;
        }
        cout << "fib(" << numFib << ") = " << y << " calls = " << fib(numFib-1) << endl;
        cont = 0;
        arruma = true;
    }

    return 0;
}
