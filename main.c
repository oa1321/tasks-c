#include <stdio.h>
#include "NumClass.h"


int main(){
   int a=0;
   int b=0;
   scanf("%d%d", &a, &b);
   printf("The Armstrong numbers are:");
   for(int i = a; i < b; i+=1){
   		if(isArmstrong(i)){
   			printf(" %d",i);
   		}
   }
   if(isArmstrong(b)){
   			printf(" %d",b);
   		}
   printf("\n");
   printf("The Palindromes are:");
   for(int i = a; i < b; i+=1){
   		if(isPalindrome(i)){
   			printf(" %d",i);
   		}
   }
   if(isPalindrome(b)){
   			printf(" %d",b);
   		}
   printf("\n");
   printf("The Prime numbers are:");
   for(int i = a; i < b; i+=1){
   		if(isPrime(i)){
   			printf(" %d",i);
   		}
   }
   if(isPrime(b)){
   			printf(" %d",b);
   		}
   printf("\n");
   printf("The Strong numbers are:");
   for(int i = a; i < b; i+=1){
   		if(isStrong(i)){
   			printf(" %d",i);
   		}
   }
   if(isStrong(b)){
   			printf(" %d",b);
   		}
   printf("\n");
   return 0;
}
