#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
 
    float x1, y1, x2, y2, raiz;
    
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    raiz = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("%.4f\n", raiz);
 
    return 0;
}