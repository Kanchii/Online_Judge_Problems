#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, b, totalPartidas = 0, interGol, gremioGol, empates = 0, interVitoria = 0, gremioVitoria = 0, c;
 	bool termina = true, re = true, inter, gremio, emp;

 	while(termina){
 		scanf("%d %d", &interGol, &gremioGol);
 		totalPartidas++;
 		if(interGol > gremioGol){
 			interVitoria++;
 		} else if(interGol < gremioGol){
 			gremioVitoria++;
 		} else if(interGol == gremioGol){
 			empates++;
 		}

 		printf("Novo grenal (1-sim 2-nao)\n");
 		re = true;
 		while(re){
 		scanf("%d\n", &c);
 		if(c == 1){
 			re = false;
 		} else if(c == 2){
 			termina = false;
 			re = false;
 		} else if(c != 1 && c != 2){
 			re = true;
 		}

 		}
 	}

 	printf("%d grenais\n", totalPartidas);
 	printf("Inter:%d\n", interVitoria);
 	printf("Gremio:%d\n", gremioVitoria);
 	printf("Empates:%d\n", empates);
 	if(interVitoria > gremioVitoria){
 		printf("Inter venceu mais\n");
 	} else if(gremioVitoria > interVitoria){
 		printf("Gremio venceu mais\n");
 	} else if(interVitoria == gremioVitoria){
 		printf("Nao houve vencedor\n");
 	}

    return 0;
}
