#include<stdio.h>
#include<string.h>
int main(){
	char str1[1000];
	int i = 0,j;
	int flag = 1;
	printf("Enter the string : ");
	scanf("%s",str1);
	while(str1[i] != '\0'){
		i++;
	}
	j = i-1;
	i = 0;
	while(i < j){
		if(str1[i] != str1[j]){
			flag = 0;
			break;
		}
		i++;
		j--;
	}
	if(flag){
		printf("Palindrome.");
	}
	else{
		printf("Not Palindrome.");
	}
	return 0;
}