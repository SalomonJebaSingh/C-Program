#include<stdio.h>
int main(){
	int n,d,a;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = n;
	while(n != 0){
		d = n % 10;
		sum = sum + d;
		n = n / 10;
	}
	printf("Sum of digits %d is %d",a,sum);
	return 0;
}