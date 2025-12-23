#include<stdio.h>
int main(){
	int n,k;
	int found = 0;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the number to found in the array : ");
	scanf("%d",&k);
	int arr[n];
	printf("Enter the element in the array : ");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++){
		if(arr[i] == k){
			printf("Position of %d in the array %d ",k,i+1);
			found = 1;
			break;
		}
	}
	if(found == 0){
		printf("Element is not found in array.");
	}
	return 0;
}