#include<stdio.h>
int main(){
	long long bin;
	int dec = 0,base = 1;
	int rem;
	printf("Enter the binary number : ");
	scanf("%lld",&bin);
	while(bin > 0){
		rem = bin % 10;
		dec = dec + rem * base;
		base = base * 2;
		bin = bin / 10;
	}
	printf("Binary to decimal conversion : %d",dec);
	return 0;
}