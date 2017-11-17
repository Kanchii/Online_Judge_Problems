#include <iostream>
 
using namespace std;
 
int main() {
 
   int ano = 0;
   int mes = 0;
   int dia;
   
   scanf("%d", &dia);
   
   while(dia >= 365){
       ano++;
       dia -= 365;
   } while(dia >= 30){
       mes++;
       dia -= 30;
   }
   
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
 
    return 0;
}