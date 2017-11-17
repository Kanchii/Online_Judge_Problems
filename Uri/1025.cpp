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

    int numMarmore;
    int consultas;
    int caso = 1;

    while(cin >> numMarmore >> consultas){
        if(numMarmore == 0 && consultas == 0){
            break;
        }
        vector<int> vetor;
        int totalConsultas[consultas];
        int marmores;

        for(int i = 0; i < numMarmore; i++){
            cin >> marmores;
            vetor.push_back(marmores);
        }
        for(int i = 0; i < consultas; i++){
            cin >> totalConsultas[i];
        }

        sort(vetor.begin(), vetor.end());

        cout << "CASE# " << caso << ":" <<endl;
        caso++;
        for(int i = 0; i < consultas; i++){
            bool found = false;
            int pos;
            for(int j = 0; j < numMarmore; j++){
                if(totalConsultas[i] == vetor[j]){
                    found = true;
                    pos = j+1;
                    break;
                }
            }

            if(found){
                cout << totalConsultas[i] << " found at " << pos << endl;
             } else {
                cout << totalConsultas[i] << " not found" << endl;
             }

        }

    }

    return 0;
}


