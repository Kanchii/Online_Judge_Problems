#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <sstream>
#include <strstream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

using namespace std;


int main(){

    int R1, X1, Y1, R2, X2, Y2;
    double dist;
    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){
        dist = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));
        if(R1 < R2){
            cout << "MORTO" << endl;
        }else if(dist + R2 <= R1){
            cout << "RICO" << endl;
        } else {
            cout << "MORTO" << endl;
        }
    }

    return 0;
}


