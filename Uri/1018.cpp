#include <iostream>
 
using namespace std;
 
int main() {
 
   int valor, valor1;
   int nota100 = 0;
   int nota50 = 0;
   int nota20 = 0;
   int nota10 = 0;
   int nota5 = 0;
   int nota2 = 0;
   int nota1 = 0;
   
   scanf("%d", &valor);
   valor1 = valor;
   
   while(valor >= 100){
       nota100++;
       valor -= 100;
   } while (valor >= 50){
       nota50++;
       valor -= 50;
   } while (valor >= 20){
       nota20++;
       valor -= 20;
   } while (valor >= 10){
       nota10++;
       valor -= 10;
   } while (valor >= 5){
       nota5++;
       valor -= 5;
   } while (valor >= 2){
       nota2++;
       valor -= 2;
   } while (valor >= 1) {
       nota1++;
       valor -= 1;
   }
 
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valor1, nota100, nota50, nota20, nota10, nota5, nota2, nota1);
 
    return 0;
}