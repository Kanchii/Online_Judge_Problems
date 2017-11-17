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

    int regioes;

    while(cin >> regioes && regioes != 0){
        vector<int> sequencia;
        for(int i = 0; i < regioes; i++){
            sequencia.push_back(i+1);
        }
        vector<int> copia = sequencia;

        int s = 1;
        while(true){
            sequencia = copia;
            int j = 0;
            while(sequencia.size() > 1){
                sequencia.erase(sequencia.begin() + j);
                j += s - 1;

                while(j >= sequencia.size()){
                    j = j - sequencia.size();
                }
            }

            if(sequencia[0] == 13){
                break;
            } else {
                s++;
            }

        }

        cout << s << endl;

    }


    return 0;
}
