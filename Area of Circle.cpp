#include<stdio.h>
int main(){
	int r;
	float area;
	printf("Enter the raduis : ");
	scanf("%d",&r);
	area = 3.14*r*r;
	printf("Area of Circle is : %.2f",area);
	return 0;
}