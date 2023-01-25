#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *first=NULL;
void createlist(int a[],int n){
	int i;
	struct node *t,*last;
	first=(struct node*)malloc(sizeof(struct node));
	first->info=a[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++){
		t=(struct node*)malloc(sizeof(struct node));
		t->info=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void traverse(){
	struct node *temp;
	if(first==NULL){
		printf("list is empty");
	}
	else{
		temp=first;
		while(temp!=NULL){
			printf("%d\n",temp->info);
			temp=temp->next;
		}
	}
}
void insertbeg(){
	int data;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter element to insert at beginning:");
	scanf("%d",&data);
	temp->info=data;
	temp->next=first;
	first=temp;
}
void insertend(){
	int data;
	struct node *temp,*head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter nbr to insert at end:");
	scanf("%d",&data);
	temp->next=0;
	temp->info=data;
	head=first;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=temp;
}
void insertpos(){
	struct node *temp,*newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(struct node));
	printf("enter position and data");
	scanf("%d %d",&pos,&data);
	temp=first;
	newnode->info=data;
	newnode->next=0;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deletefirst(){
	struct node *temp;
	if(first==NULL){
		printf("list is empty");
	}
	else{
		temp=first;
		first=first->next;
		free(temp);
	}
}
void deleteend(){
	struct node *temp,*prenode;
	if(first==NULL){
                printf("list is empty");
        }
        else{
		temp=first;
		while(temp->next!=0){
			prenode=temp;
			temp=temp->next;
		}
		free(temp);
		prenode->next=0;
	}
}
void deletepos()
{
	struct node *temp,*position;
	int i=1,pos;
	if(first==NULL){
                printf("list is empty");
        }
        else{
		printf("enter index");
		scanf("%d",&pos);
		position=malloc(sizeof(struct node));
		temp=first;
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		position=temp->next;
		temp->next=position->next;
		free(position);
	}
}
int main()
{
	int choice;
	while(1){
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				traverse();
				break;
			case 2:
				insertbeg();
				break;
			case 3:
				insertend();
				break;
			case 4:
				insertpos();
				break;
			case 5:
				deletefirst();
				break;
			case 6:
				deleteend();
				break;
			case 7:
				deletepos();
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("incorrect choice");
		}
	}
}

