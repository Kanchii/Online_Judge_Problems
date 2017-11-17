#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(A>=B+C || B>=A+C || C>=B+A){
        printf("NAO FORMA TRIANGULO\n");
    } else {
    if(A*A == C*C + B*B || B*B == A*A+C*C || C*C == A*A+B*B){
        printf("TRIANGULO RETANGULO\n");
    }
     else if(A*A > B*B + C*C || B*B > A*A + C*C || C*C > A*A+B*B){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((A == B || A == C) && B != C){
        printf("TRIANGULO ISOSCELES\n");
    }
   
}
 return 0;
}