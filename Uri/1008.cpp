#include <iostream>
 
using namespace std;
 
int main() {
 
   int a, b;
   float salaryh, salary;
   
   scanf("%d %d %f", &a, &b, &salaryh);
   
   salary = b * salaryh;
   
   printf("NUMBER = %d\nSALARY = U$ %.2f\n", a, salary);
 
    return 0;
}