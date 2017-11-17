#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
    
    float n1, n2, n3, n4, media;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (n1*2+n2*3+n3*4+n4)/10;
    
   printf("Media: %.1f\n", media);
   
   if(media >= 7){
       printf("Aluno aprovado.\n");
   } else if ( media < 5){
       printf("Aluno reprovado.\n");
   } else {
       printf("Aluno em exame.\n");
       float rec;
       scanf("%f", &rec);
       printf("Nota do exame: %.1f\n", rec);
       media = (media+rec)/2;
       if(media >=5){
          printf("Aluno aprovado.\n");
       } else {
          printf("Aluno reprovado.\n");
       }
   
   		printf("Media final: %.1f\n", media);
   } 
   return 0; 
}