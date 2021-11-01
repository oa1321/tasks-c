#include <stdio.h>
#include "NumClass.h"


//calc how many digits there are in x
int digAmount(int x){
	if(x==0){
		return 1;
	}
	int sum = 0;
	while(x>0){
		x = x/10;
		sum +=1;
	}
	return sum;
}
//calc x^pow
int Pow(int x, int pow){
	if(pow == 0){
		return 1;
	}
	return x*Pow(x,pow-1);
}

//check if x is armstrong number
int isArmstrong(int x){
	int digits = digAmount(x);
	int sum = 0;
	int num = x;
	for(int i=1; i<=digits; i+=1){
		sum += Pow(x%10,digits);
		x = x/10;
	
	}
	
	if(sum==num){
		return true;
	}
	return false;
}

//gets the i digit of x
int getDig(int x, int i){	
	int d = x/Pow(10,i);
	return d%10;
}

int isPalindrome(int x){
	int digits = digAmount(x);
	if(digits == 1){
		return true;
	}
	for(int i=0; i<digits/2; i+=1){
		if(getDig(x,i) != getDig(x,digits-1-i)){
			return false;
		}
	}
	return true;
}
/*
int main()
{
   	for(int i = 0; i < 100; i+=1){
   			printf("%d: is palindrome? %d \n" ,i,isPalindrome(i));
   			printf("%d: is armstrong? %d \n" ,i,isArmstrong(i));
   			printf("------------------------\n");
   	}
   return 0;
}*/
