#include<stdio.h>
int fact(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	printf("Factorial of the  given number\n");
	int num,f;
	printf("Enter the number :");
	scanf("%d", &num);
	f = fact(num);
	printf("Factortial of %d is %d",num ,f);
	return 0;
}