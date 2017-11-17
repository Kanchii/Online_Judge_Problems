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
    int N1, N2, Q1, Q2;

    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> N1 >> N2;
        int R = 1;
        Q1 = N1;
        Q2 = N2;

        while(R != 0){
            R = Q1%Q2;
            Q1 = Q2;
            Q2 = R;
        }

        cout << Q1 << endl;
    }

    return 0;
}


