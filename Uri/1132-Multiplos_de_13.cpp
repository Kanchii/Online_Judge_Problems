#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x, y, soma = 0;

	scanf("%d\n%d", &x, &y);

	if(x >= y){
		while(y <= x){
			if(y%13 != 0){
				soma+=y;
				y++;
			} else {
				y++;
			}
		}
	} else if (y >= x){
		while(x <= y){
			if(x%13 != 0){
				soma+=x;
				x++;
			} else {
				x++;
			}
		}
	}

 	printf("%d\n", soma);

    return 0;
}
