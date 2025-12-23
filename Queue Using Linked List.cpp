#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void add(){
	int item;
	struct Node *newNode;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	printf("Enter the element to add Queue : ");
	scanf("%d",&item);
	newNode -> data = item;
	newNode -> next = NULL;
	if(rear == NULL){
		front = rear = newNode;
	}
	else{
		rear -> next = newNode;
		rear = newNode;
	}
	printf("Element is add in queue.\n");
}
void del(){
	struct Node *temp;
	if(front == NULL){
		printf("Queue is empty.\n");
		return;
	}
	temp = front;
	printf("Delete element is : %d\n",temp->data);
	front = front -> next;
	free(temp);
	if(front == NULL){
		rear = NULL;
	}
}
void display(){
	struct Node *temp;
	if(front == NULL){
		printf("Queue is empty.\n");
		return;
	}
	temp = front;
	printf("Element in the Queue.\n");
	while(temp != NULL){
		printf("%d",temp -> data);
		temp = temp -> next;
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