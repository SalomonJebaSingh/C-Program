#include<stdio.h>
int main(){
	int n;
	int posc = 0,poss = 0;
	int negc = 0,negs = 0;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element in array \n");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++){
		if(arr[i] > 0){
			posc++;
			poss += arr[i];
		}
		else{
			negc++;
			negs += arr[i];
		}
	}
	printf("Count of positive in the array : %d\n",posc);
	printf("Sum of positive in the array : %d\n",poss);
	printf("Count of negative in the array : %d\n",negc);
	printf("Sum of negative in the array : %d\n",negs);
	return 0;
}