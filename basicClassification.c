#include <stdio.h>
#include "NumClass.h"


//caluclate the factorial of a number - (a)
int factorial(int a){
	if(a>1){
		return a*factorial(a-1);
	}
	return 1;

}

//check if a number is a strong number
int isStrong(int x){
	int sum = 0;
	int num = x;
	if(x==0){
		return false;
	}
	while(x>0){
		sum = sum + factorial(x%10);
		x = x/10;
	}
	if(num == sum){
		return true;
	}
	return false;
}

//check if x is a prime number
int isPrime(int x){
	int isprime = true;
	if(x < 2){
		return false;
	}
	for(int i = 2; i < x; i+=1){
		if(x%i == 0){
			isprime = false;
		}
	}
	return isprime;
}
/*
int main(){
   
   for(int i = 0; i < 150; i+=1){
   		printf("%d: is strong? %d \n" ,i,isStrong(i));
   		printf("%d: is prime? %d \n" ,i,isPrime(i));
   		printf("------------------------\n");
   }
   return 0;
}*/
