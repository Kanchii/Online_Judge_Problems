#include <iostream>
 
using namespace std;
 
int main() {
 
    float salario, newSalario;
    int reajuste;
    char porcento;
    
    scanf("%f", &salario);
    
    porcento = 37;
    
    if(salario <= 400){
        newSalario = salario*1.15;
        reajuste = 15;
    } else if(salario >= 400.01 && salario <= 800){
        newSalario = salario*1.12;
        reajuste = 12;
    } else if(salario >= 800.01 && salario <= 1200){
        newSalario = salario*1.10;
        reajuste = 10;
    } else if (salario >= 1200.01 && salario <= 2000){
        newSalario = salario*1.07;
        reajuste = 7;
    } else if(salario > 2000){
        newSalario = salario*1.04;
        reajuste = 4;
    }
 
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", newSalario, (newSalario - salario), reajuste, porcento);
    
    return 0;
}