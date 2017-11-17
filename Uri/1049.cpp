#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
 
   char info1[12], info2[8], info3[10];
   
   scanf("%s %s %s", &info1, &info2, &info3);
   
   if(strcmp(info1, "vertebrado") == 0){
       if(strcmp(info2, "ave") == 0){
           if(strcmp(info3, "carnivoro") == 0){
               printf("aguia\n");
           } else {
               printf("pomba\n");
           }
       } else {
           if(strcmp(info3, "onivoro") == 0){
               printf("homem\n");
           } else {
               printf("vaca\n");
           }
       }
   } else {
       if(strcmp(info2, "inseto") == 0){
           if(strcmp(info3, "hematofago") == 0){
               printf("pulga\n");
           } else {
               printf("lagarta\n");
           }
       }else {
           if(strcmp(info3, "hematofago") == 0){
               printf("sanguessuga\n");
           } else {
               printf("minhoca\n");
           }
       }
   }
 
    return 0;
}