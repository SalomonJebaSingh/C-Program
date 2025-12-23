#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++){
		scanf("%d",& arr[i]);
	}
	for(int i = 0;i < n;i++){
		int D = 0;
		for(int j = 0;j < i;j++){
			if(arr[i] == arr[j]){
				D = 1;
				break;
			}
		}
		if(!D){
			printf("%d",arr[i]);
		}
	}
	return 0;
}