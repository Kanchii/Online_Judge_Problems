#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c, d;
    float e, f, x;
    
    scanf("%d %d %f\n%d %d %f", &a, &b, &e, &c, &d, &f);
    
    x = (b * e) + (d * f);
    
    printf("VALOR A PAGAR: R$ %.2f\n", x);
 
    return 0;
}