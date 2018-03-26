#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, x, y, count = 0, count2 = 0, soma = 0;

	scanf("%d", &a);

		while(count < a){
		scanf("%d %d", &x, &y);
			if(x%2 == 0){
				x++;
			}
			if(x%2 != 0){
			while(count2 < y){
				soma+=x;
				x+=2;
				count2++;
			}
		}

			printf("%d\n", soma);
			count2 = 0;
			soma = 0;
			count++;
		}

    return 0;
}
