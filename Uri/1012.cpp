#include <iostream>
 
using namespace std;
 
int main() {
 
    double A, B, C;
    double areaTri, areaCir, areaTrap, areaQuad, areaRet;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    areaTri = (A * C)/2;
    areaCir = 3.14159*C*C;
    areaTrap = ((A+B)*C)/2;
    areaQuad = B * B;
    areaRet = A*B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTri, areaCir, areaTrap, areaQuad, areaRet);
    
 
    return 0;
}