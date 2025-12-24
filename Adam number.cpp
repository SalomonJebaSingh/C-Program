#include<stdio.h>
int reverse(int a){
	int d;
	int rev = 0;
	while(a != 0){
		d = a % 10;
		rev = rev * 10 + d;
		a = a / 10;
	}
	return rev;
}
int main(){
	int n,sq1,sq2,rev_n,rev_sq2;
	printf("Enter the number : ");
	scanf("%d",&n);
	sq1 = n * n;
	rev_n = reverse(n);
	sq2 = rev_n * rev_n;
	rev_sq2 = reverse(sq2);
	if(sq1 == rev_sq2){
		printf("%d is Adam number.",n);
	}
	else{
		printf("%d is not Adam number.",n);
	}
	return 0;
}