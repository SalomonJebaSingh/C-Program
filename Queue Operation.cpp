#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1,rear = -1;
void add(){
	int item;
	if(rear == MAX-1){
		printf("Queue is overflow");
		return;
	}
	printf("Enter the number to add in the queue : ");
	scanf("%d",&item);
	if(front == -1){
		front = 0;
	}
	rear++;
	queue[rear] = item;
	printf("Element is add in the queue");
}
void del(){
	if(front == -1 || front > rear){
		printf("Queue is empty");
	}
	printf("Delete element : %d\n",queue[front]);
	front++;
}
void display(){
	if(front == -1 || front > rear){
		printf("Queue is empty");
	}
	printf("Element in Queue.\n");
	for(int i = front;i <= rear;i++){
		printf("%d",queue[i]);
	}
	printf("\n");
}
int main(){
	int choice;
	do{
		printf("--------Queue Menu---------\n");
		printf("1.Add the element in Queue.\n");
		printf("2.Delete the element in Queue.\n");
		printf("3.Display the element in the Queue.\n");
		printf("4.Exit the operation.\n");
		printf("Enter the choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				add();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exit.\n");
				break;
			default:
				printf("Invaild number in choice");
		}
	}while(choice != 4);
	return 0;
}