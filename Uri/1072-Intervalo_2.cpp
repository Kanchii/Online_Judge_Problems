#include <iostream>

using namespace std;

int main() {

    int numero, a, in = 0, out = 0, i = 0;

    scanf("%d", &numero);

    while(i < numero){
        scanf("%d", &a);

        if(a >= 10 && a<=20){
            in++;
            i++;
        } else {
            out++;
            i++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
