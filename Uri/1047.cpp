#include <iostream>
 
using namespace std;
 
int main() {
 
    int h1, m1, h2, m2, HoraTotal, MinutoTotal;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    if(h1 > h2){
        if(m1 > m2){
            HoraTotal = h2 - h1 + 23;
            MinutoTotal = m2 - m1 + 60;
        } else {
            HoraTotal = h2 - h1 + 24;
            MinutoTotal = m2 - m1;
        }
    } else if(h1 == h2){
        if(m1 > m2){
            HoraTotal = 23;
            MinutoTotal = m2 - m1 + 60;
        } else {
            HoraTotal = 24;
            MinutoTotal = m2 - m1;
        }
    }
    
    else {
        if(m1 > m2){
            HoraTotal = h2 - h1 - 1;
            MinutoTotal = m2 - m1 + 60;
        } else {
            HoraTotal = h2 - h1;
            MinutoTotal = m2 - m1;
        }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HoraTotal, MinutoTotal);
 
    return 0;
}