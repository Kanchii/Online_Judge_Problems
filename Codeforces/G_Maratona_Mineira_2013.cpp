#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-7

double volume(double a, double b, double c){
    return ((a - 2 * c) * (b - 2 * c) * c);
}

int main(){
    ios_base::sync_with_stdio(false);
    int a, b;
    while(cin >> a >> b, a+b != 0){
        double res = 0;
        double esq = 0, dir = min(a,b)/2.0;

        while( dir-esq > EPS){
            double x = (dir-esq)/3.0;
            double p1 = esq+x;
            double p2 = esq+2*x;

            if(volume(a,b,p1) < volume(a,b,p2))
                esq = p1;
            else
                dir = p2;

        }
        printf("%.4f %.4f\n", esq, volume(a,b,esq));
    }
    return 0;
}
