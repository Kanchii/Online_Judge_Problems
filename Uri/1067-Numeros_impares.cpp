#include <iostream>

using namespace std;

int main() {

    int a, aux;

    scanf("%d", &a);



    for(int i = 0; i <= a; i++){

        if(i%2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
