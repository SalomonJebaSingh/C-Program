#include<stdio.h>
#include<string.h>
void str_len(char str1[]){
	int i = 0;
	while(str1[i] != '\0'){
		i++;
	}
	printf("Length String is %d\n",i);
}
void str_copy(char str1[]){
	char str2[1000];
	int i = 0;
	while(str1[i] != '\0'){
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("Source String : %s\n",str1);
	printf("copied String : %s\n",str2);
}
void str_con(char str1[],char str2[]){
	int i = 0,j = 0;
	while(str1[i] != '\0'){
		i++;
	}
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	printf("String Concatenation : %s\n",str1);
}
void str_comp(char str1[],char str2[]){
	int i = 0,flag = 1;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] != str2[i]){
			flag = 0;
			break;
		}
		i++;
	}
	if(flag){
		printf("Strings are equal.\n");
	}
	else{
		printf("String are not equal.\n");
	}
}
void str_rev(char str1[]){
	int i = 0,j;
	char temp;
	while(str1[i] != '\0'){
		i++;
	}
	j = i - 1;
	i = 0;
	while(i < j){
		temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
		i++;
		j--;
	}
	printf("Reverse string : %s\n",str1);
}
int main(){
	char a[1000];
	char b[1000];
	char c[1000];
	printf("Enter the First string : ");
	scanf("%s",a);
	printf("Enter the Second string : ");
	scanf("%s",b);
	printf("Enter the string to revrese : ");
	scanf("%s",c);
	str_len(a);
	str_copy(a);
	str_con(a,b);
	str_comp(a,b);
	str_rev(c);
	return 0;
}