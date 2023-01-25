#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[maxsize];
void main()
{
	int choice;
	while(choice!=4){
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
			        delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("enter valid choice");
		}
	}
}
void insert()
{
	int item;
	printf("enter element");
	scanf("%d",&item);
	if(rear==maxsize-1){
		printf("overflow");
	}
	if(front==-1&&rear==-1){
		front=0;
		rear=0;
	}
	else{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("value inserted\n");
}
void delete()
{
	int item;
	if(front==-1||front>rear){
		printf("underflow");
	}
	else{
		item=queue[front];
		if(front==rear){
			front=-1;
		}
		else{
			front=front+1;
		}
		printf("value deleted\n");
	}
}
void display()
{
	int i;
	if(rear==-1){
		printf("empty queue");
	}
	else{
		printf("printing value\n");
		for(i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}
}









