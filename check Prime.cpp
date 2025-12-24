#include<stdio.h>
#include<math.h>
int Prime(int a){
	if(a <= 1){
		return 0;
	}
	else{
		for(int i = 2;i <= sqrt(a);i++){
			if(a % i == 0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(Prime(n)){
		printf("%d is prime number.",n);
	}
	else{
		printf("%d is not prime number.",n);
	}
	return 0;
}