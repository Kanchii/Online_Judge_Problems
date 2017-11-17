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
    int pessoas, salto;
    int s;
    vector<int> vetor;

    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> pessoas >> salto;
        for(int i = 0; i < pessoas; i++){
            vetor.push_back(i+1);
        }

        int j = 0;

        while(vetor.size() > 1){
            s = salto;
            while(s > 0){
                if(j == vetor.size()){
                    j = 0;
                }
                s--;
                if(s == 0){
                    break;
                }
                j++;
            }
            vetor.erase(vetor.begin() + j);
        }

        cout << "Case " << i + 1 << ": " << vetor[0] << endl;
        vetor.clear();
    }



    return 0;
}


