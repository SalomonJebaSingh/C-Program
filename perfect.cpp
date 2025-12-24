#include<stdio.h>
int main(){
	int n,a;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = n;
	for(int i = 1;i <= n/2;i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n && n > 0){
		printf("%d is perfect number.",a);
	}
	else{
		printf("%d is not perfect number.",a);
	}
	return 0;
}