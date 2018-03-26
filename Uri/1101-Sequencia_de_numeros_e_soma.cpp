#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

   int a, b, aux, soma;
   bool libera = true;

   while(libera == true){
   		scanf("%d %d", &a, &b);

   		if(a > 0 && b > 0){
   			if(a > b){
   				aux = b;
   				while(a >= aux){
   					printf("%d ", aux);
   					soma+=aux;
   					aux++;
   				}
   				printf("Sum=%d\n", soma);
   				soma = 0;
   			} else {
   				aux = a;
   				while(aux <= b){
   					printf("%d ", aux);
   					soma+=aux;
   					aux++;
   				}
   				printf("Sum=%d\n", soma);
   				soma = 0;
   			}
   		} else {
   			libera = false;
   		}
   }



    return 0;
}
