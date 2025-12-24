#include<stdio.h>
int main(){
	int n,rem;
	int octal = 0,place = 1;
	printf("Enter the Decimal number : ");
	scanf("%d",&n);
	while(n > 0){
		rem = n % 8;
		octal = octal + rem * place;
		place *= 10;
		n /= 8;
	}
	printf("Decimal to Octal Conversion : %d",octal);
	return 0;
}