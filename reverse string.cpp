#include<stdio.h>
int main(){
	char str[100],rev[100];
	int len = 0,i = 0,j = 0;
	printf("Enter the String : ");
	scanf("%s",str);
	while(str[i] != '\0'){
		len++;
		i++;
	}
	for(i = len-1;i >= 0;i--){
		rev[j] = str[i];
		j++;
	}
	rev[j] = '\0';
	printf("Reverse a string : %s",rev);
	return 0;
}