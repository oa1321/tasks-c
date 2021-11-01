#include <stdio.h>
#include "NumClass.h"


int main(){
   int a=0;
   int b=0;
   scanf("%d%d", &a, &b);
   for(int i = a; i < b+1; i+=1){
   		if(isArmstrong(i)){
   			printf("%d ",i);
   		}
   }
   printf("\n");
   for(int i = a; i < b+1; i+=1){
   		if(isPalindrome(i)){
   			printf("%d ",i);
   		}
   }
   printf("\n");
   for(int i = a; i < b+1; i+=1){
   		if(isPrime(i)){
   			printf("%d ",i);
   		}
   }
   printf("\n");
   for(int i = a; i < b+1; i+=1){
   		if(isStrong(i)){
   			printf("%d ",i);
   		}
   }
   return 0;
}
