//find the largest and smallest element in an array
#include<stdio.h>
int main(){
	int arr[100];
	int n,i,large,small;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the number in array \n");
	for(i=0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	large = small = arr[0];
	for(i =0 ;i < n;i++){
		if(arr[i] < small){
			small = arr[i];
		}
		if(arr[i] > large){
			large = arr[i];
		}
	}
	printf("Largest number is : %d\n", large);
	printf("Smallest number is : %d\n",small);
	return 0;
}