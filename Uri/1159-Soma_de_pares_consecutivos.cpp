#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, count = 0, soma = 0;
	bool termina = true;

	while(termina){

		scanf("%d", &a);

		if(a != 0){
			if(a%2 != 0){
				a++;
			}
			while(count < 5){
				soma+=a;
				a+=2;
				count++;
			}
			printf("%d\n", soma);
			soma = 0;
			count = 0;
		} else if(a == 0) {
		termina = false;
		}
	}


    return 0;
}
