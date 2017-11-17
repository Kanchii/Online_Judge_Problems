#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, HoraTotal;
    
    scanf("%d %d", &a, &b);
    
    if(a > b){
    HoraTotal = b - a + 24;
    } else if (a == b){
        HoraTotal = 24;
    } else {
        HoraTotal = b - a;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", HoraTotal);
 
    return 0;
}