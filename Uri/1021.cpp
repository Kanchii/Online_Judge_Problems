#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	double dinheiro;
	int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;
	int grana;
	bool termina = true;

	scanf("%lf", &dinheiro);

	grana = dinheiro*100;


	while(termina){

		while(grana >= 10000){
			nota100++;
			grana-=10000;

		}

		while(grana >= 5000){
			nota50++;
			grana-=5000;

		}

		while(grana>=2000){
			nota20++;
			grana-=2000;

		}

		while(grana>=1000){
			nota10++;
			grana-=1000;

		}

		while(grana>=500){
			nota5++;
			grana-=500;

		}

		while(grana>=200){
			nota2++;
            grana-=200;

		}

		while(grana>=100){
			moeda100++;
			grana-=100;

		}


		while(grana>=50){
			moeda50++;
			grana-=50;

		}

		while(grana>=25){
			moeda25++;
			grana-=25;

		}

		while(grana>=10){
			moeda10++;
			grana-=10;

		}

		while(grana>=5){
			moeda5++;
			grana-=5;

		}

		moeda1 = grana;

		termina = false;
	}


 	printf("NOTAS:\n");
 	printf("%d nota(s) de R$ 100.00\n", nota100);
 	printf("%d nota(s) de R$ 50.00\n", nota50);
 	printf("%d nota(s) de R$ 20.00\n", nota20);
 	printf("%d nota(s) de R$ 10.00\n", nota10);
 	printf("%d nota(s) de R$ 5.00\n", nota5);
 	printf("%d nota(s) de R$ 2.00\n", nota2);
 	printf("MOEDAS:\n");
 	printf("%d moeda(s) de R$ 1.00\n", moeda100);
 	printf("%d moeda(s) de R$ 0.50\n", moeda50);
 	printf("%d moeda(s) de R$ 0.25\n", moeda25);
 	printf("%d moeda(s) de R$ 0.10\n", moeda10);
 	printf("%d moeda(s) de R$ 0.05\n", moeda5);
 	printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}