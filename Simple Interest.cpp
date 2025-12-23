#include<stdio.h>
int main(){
	int p,r,t;
	int I;
	printf("Enter the principal amount : ");
	scanf("%d",&p);
	printf("Enter the rate : ");
	scanf("%d",&r);
	printf("Enter the time : ");
	scanf("%d",&t);
	I = (p*r*t)/100;
	printf("Simple Interest : %d",I);
	return 0;
}