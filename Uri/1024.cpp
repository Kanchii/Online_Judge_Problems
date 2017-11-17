#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

int main(){

    int testes;
    int tamStrBackup;
    int tamStr = 0;
    int k = 0;
    string texto;
    string reverso;


    cin >> testes;
    getchar();

    for(int i = 0; i < testes; i++){
        getline(cin, texto);

        while(texto[tamStr] != '\0'){
            tamStr++;
        }
        tamStrBackup = tamStr;
        char result[tamStr];

        for(int j = 0; j < tamStr; j++){
            if(isalpha(texto[j])){
                texto[j] = texto[j] + 3;
            }
        }
        reverso = texto;

        for(int j = 0; j < tamStr/2; j++){
            texto[j] = texto[tamStrBackup-1];
            texto[tamStrBackup-1] = reverso[j];
            tamStrBackup--;
        }

        for(int j = (int)tamStr/2; j < tamStr; j++){
            //if(!isspace(texto[j])){
                texto[j] = texto[j] - 1;
            //}
        }
        for(int j = 0; j < tamStr; j++){
            result[k] = texto[j];
            k++;
        }



        for(int l = 0; l < k; l++){
            cout << result[l];
        }
        cout << endl;
        tamStr = 0;
        k = 0;

    }

    return 0;
}