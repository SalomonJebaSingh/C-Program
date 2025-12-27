#include<stdio.h>
void printMatrix(int r, int c, int p[r][c]) {
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
void addMatrix(int r,int c,int a[r][c],int b[r][c]){
	int sum[r][c];
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printMatrix(r,c,sum);
}
void subMatrix(int r,int c,int a[r][c],int b[r][c]){
	int sub[r][c];
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printMatrix(r,c,sub);
}
void mulMatrix(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2]){
	int mul[r1][c2];
	for(int i = 0;i < r1;i++){
		for(int j = 0;j < c2;j++){
			mul[i][j] = 0;
			for(int k = 0;k < c1;k++){
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printMatrix(r1,c2,mul);
}
int main(){
	int r1,c1,r2,c2;
	int choice;
	printf("Enter the size of Matrix A row : ");
	scanf("%d",&r1);
	printf("Enter the size of Matrix A columns : ");
	scanf("%d",&c1);
	printf("Enter the size of Matrix B row : ");
	scanf("%d",&r2);
	printf("Enter the size of Matrix B columns : ");
	scanf("%d",&c2);
	int ma1[r1][c1];
	int ma2[r2][c2];
	printf("Enter the element in Matrix A \n");
	for(int i = 0;i < r1;i++){
		for(int j = 0;j <c1;j++){
			scanf("%d",&ma1[i][j]);
		}
	}
	printMatrix(r1,c1,ma1);
	printf("Enter the element in Matrix B \n");
	for(int i = 0;i < r2;i++){
		for(int j = 0;j <c2;j++){
			scanf("%d",&ma2[i][j]);
		}
	}
	printMatrix(r2,c2,ma2);
	do {
        printf("\nMatrix Operations Using Functions\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Matrix Multiplication\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (r1 == r2 && c1 == c2)
                    addMatrix(r1, c1, ma1, ma2);
                else
                    printf("Addition not possible!\n");
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                    subMatrix(r1, c1, ma1, ma2);
                else
                    printf("Subtraction not possible!\n");
                break;

            case 3:
                if (c1 == r2)
                    mulMatrix(r1, c1, r2, c2, ma1, ma2);
                else
                    printf("Multiplication not possible!\n");
                break;

            case 0:
                printf("Program exited.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}	