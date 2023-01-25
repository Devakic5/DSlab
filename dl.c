#include <stdio.h>
#include <stdlib.h>
struct node{
        int info;
        struct node *next,*prev;
};
struct node *start=NULL;
void traverse(){
	if(start==NULL){
		printf("list is empty");
		return;
	}
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		printf("%d\n",temp->info);
		temp=temp->next;
	}
}
void insertfront(){
	int data;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the nbr to insert at front");
	scanf("%d",&data);
	temp->info=data;
	temp->prev=NULL;
	temp->next=start;
	start=temp;
}
void insertend(){
	int data;
	struct node *next,*trav,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the nbr to insert at end");
        scanf("%d",&data);
	temp->prev=NULL;
        temp->next=start;
        start=temp;
}
void insertpos(){
	int data,pos,i=1;
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->prev=NULL;
	printf("\n enter position");
	scanf("%d",&pos);
	if(start==NULL){
		start=newnode;
		newnode->prev=NULL;
                newnode->next=NULL;
	}
	else if(pos==1){
			insertfront();
		}
		else{
			printf("enter nbr to insert at any position");
			scanf("%d",&data);
			newnode->info=data;
			temp=start;
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			newnode->next=temp->next;
			newnode->prev=temp;
			temp->next=newnode;
			temp->next->prev=newnode;
		}
}

void deletefirst(){
	struct node *temp;
	if(start==NULL){
                start=temp;
        }
        else{
		temp=start;
		start=start->next;
		if(start!=NULL){
			start->prev=NULL;
		}
		free(temp);
	}
}
void deleteend(){
	struct node *temp;
        if(start==NULL){
		printf("list is empty");
	}
	else if(start->next==NULL){
                start=NULL;
		free (start);
		printf("node deleted");
	}
	else{
                temp=start;
		if(temp->next!=NULL){
			temp=temp->next;
		}
		temp->prev->next=NULL;
	        free(temp);
		printf("node deleted");
		}
}
void deletepos(){
	int pos,i=1;
	struct node *temp,*position;
	temp=start;
        if(start==NULL){
                printf("\n list is empty");
        }
	else{
		printf("\n enter position");
		scanf("%d",&pos);
		if(pos==1){
			deletefirst();
			if(start!=NULL){
				start->prev=NULL;
			}
			free(position);
			return;
		}
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		position=temp->next;
		if(position->next!=NULL){
			position->next->prev=temp;
			temp->next=position->next;
			free(position);
		}
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
                                insertfront();
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
	










