#include <iostream>
#include  <stdio.h>

using namespace std;

int main() {

   float salario, aux, aux2, aux3;

   scanf("%f", &salario);

   if(salario >= 0){
   		if(salario <= 2000){
   			printf("Isento\n");
   		} else if(salario > 2000 && salario <= 3000){
   			aux = salario - 2000;

   			aux*=0.08;

   			printf("R$ %.2f\n", aux);

   		} else if(salario > 3000 && salario <= 4500){
   			aux = salario - 3000;

   			aux*=0.18;

   			printf("R$ %.2f\n", aux + 1000*0.08);

   		} else if(salario > 4500){
   			aux = salario - 4500;

   			aux *= 0.28;

   			printf("R$ %.2f\n", aux + 1000*0.08 + 1500*0.18);
   		}
   }

    return 0;
}
