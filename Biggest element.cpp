#include<stdio.h>
int main(){
	int n,max;
	int pos = 0;
	printf("Enter the number of element in array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element in array \n");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(int i = 1;i < n;i++){
		if(arr[i] > max){
			max = arr[i];
			pos = i;
		}
	}
	printf("Biggest element in the array : %d\n",max);
	printf("Biggest element in the array index : %d\n",pos);
	printf("Biggest element in the array postition : %d",pos+1);
	return 0;
}