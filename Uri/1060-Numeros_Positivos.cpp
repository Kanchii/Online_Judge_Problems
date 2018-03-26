#include <iostream>

using namespace std;

int main() {

    float a, b, c, d, e, f;
    int pos;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if(a > 0){
        pos++;
    }
    if(b > 0){
        pos++;
    }
    if(c > 0){
        pos++;
    }
    if(d > 0){
        pos++;
    }
    if(e > 0){
        pos++;
    }
    if(f > 0){
        pos++;
    }

    printf("%d valores positivos\n", pos);
    return 0;
}
