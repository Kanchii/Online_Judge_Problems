#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e;
    int par;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a%2 == 0){
        par++;
    }
    if(b%2 == 0){
        par++;
    }
    if(c%2 == 0){
        par++;
    }
    if(d%2 == 0){
        par++;
    }
    if(e%2 == 0){
        par++;
    }

    printf("%d valores pares\n", par);

    return 0;
}
