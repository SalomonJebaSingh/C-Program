#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of element in array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the  element in array : \n");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Second largest element in the array : %d",arr[n-2]);
	return 0;
}