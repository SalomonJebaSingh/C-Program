#include<stdio.h>
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n % 8 == 0){
		printf("%d is divisible by 8",n);
	}
	else{
		printf("%d is not divisible by 8.",n);
	}
	return 0;
}