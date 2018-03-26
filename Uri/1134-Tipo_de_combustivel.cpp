#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

 	int a, totalAlcool = 0, totalGaso = 0, totalDie = 0;
 	bool termina = true;

 	while(termina){
 		scanf("%d", &a);

 		if(a == 1){
 			totalAlcool++;
 		} else if(a == 2){
 			totalGaso++;
 		} else if(a == 3){
 			totalDie++;
 		} else if(a == 4){
 			termina = false;
 		} else if(a < 1 || a > 4){
 			termina = true;
 		}
 	}

 	printf("MUITO OBRIGADO\n");
 	printf("Alcool: %d\n", totalAlcool);
 	printf("Gasolina: %d\n", totalGaso);
 	printf("Diesel: %d\n", totalDie);

    return 0;
}
