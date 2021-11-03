#include <stdio.h>
#include "NumClass.h"

//calc x^pow
int Pow(int x, int pow){
	if(pow == 0){
		return 1;
	}
	return x*Pow(x,pow-1);
}

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

int isrec(int x,int digits){
	int sum = 0;
	if(digits == 1){
		return true;
	}
	if (x==0){
		return 0;
	}
	
	sum = isrec(x/10,digits) + Pow(x%10,digits);
	
	if(digAmount(x) == digits){
		if(sum == x){
			return true;
		}
		return false;
	}
	return sum;
}

int isArmstrong(int x){
	x = x+0;
	
	return isrec(x,digAmount(x));
}

int getDig(int x, int i){	
	int d = x/Pow(10,i);
	return d%10;
}

int isrecP(int x,int times){
	int digits = digAmount(x);
	int i = times;
	if(times>=digits/2){
		return true;
	}
	if(getDig(x,i) != getDig(x,digits-1-i)){
		return false;
	}
	return isrecP(x,times+1);
}

int isPalindrome(int x){
	return isrecP(x,0);
}

/*
int main()
{
   	for(int i = 0; i < 1112; i+=1){
   			printf("%d: is palindrome? %d \n" ,i,isPalindrome(i));
   			printf("%d: is armstrong? %d \n" ,i,isArmstrong(i));
   			printf("------------------------\n");
   	}
   return 0;
}*/
