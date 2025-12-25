#include<stdio.h>
int main(){
	int n;
	float avg;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++){
		sum += arr[i];
	}
	avg = sum/n;
	printf("Sum of number in the array : %d\n",sum);
	printf("Average of array : %.2f",avg);
	return 0;
}