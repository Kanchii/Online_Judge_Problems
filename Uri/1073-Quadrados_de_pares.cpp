#include <iostream>

using namespace std;

int main() {

    int a;
    char eleva = 94;

    scanf("%d", &a);

    if(a > 5 && a < 2000){
        for(int i = 1; i <= a; i++){
            if(i%2 == 0){
                printf("%d%c2 = %d\n", i, eleva, i*i);
            }
        }
    }

    return 0;
}
