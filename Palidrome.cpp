#include<stdio.h>
int main(){
	char str[100];
	int i,j;
	int flag = 1;
	printf("Enter the string : ");
	scanf("%s",str);
	for(j = 0; str[j] != '\0'; j++);
	for(i = 0, j = j-1;i < j;i++,j--){
		if(str[i] != str[j]){
			flag = 0;
			break;
		}
	}
	if(flag){
		printf("Palidrome");
	}
	else{
		printf("Not Palidrome");
	}
	return 0;
}