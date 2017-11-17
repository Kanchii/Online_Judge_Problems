#include <iostream>
 
using namespace std;
 
int main() {
 
    int hora = 0;
    int minuto = 0;
    int tempo;
    
    scanf("%d", &tempo);
    
    if(tempo >= 0){
        while(tempo >= 3600){
            hora++;
            tempo -= 3600;
        } while (tempo >= 60){
            minuto++;
            tempo-=60;
        }
    
        printf("%d:%d:%d\n", hora, minuto, tempo);
    }
    
    return 0;
}