#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define max 50
int size;
struct stack{
	int arr[max];
	int top;
};
void init_stk(struct stack *st){
	st->top=-1;
}
void push(struct stack *st,int num){
	if(st->top==size-1){
		printf("stack overflow");
	}
	st->top++;
	st->arr[st->top]=num;
}
int pop(struct stack *st){
	int num;
	if(st->top==-1){
		printf("stack underflow");
	}
	num=st->arr[st->top];
	st->top--;
	return num;
}
void display(struct stack *st){
	int i;
	for(i=st->top;i>=0;i--){
		printf("%d",st->arr[i]);
	}
}
int main()
{
	int element,opt,val;
	struct stack ptr;
	init_stk(&ptr);
	printf("enter size of stack");
	scanf("%d",&size);
	while(1){
		printf("enter your option");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("enter element into stack");
				scanf("%d",&val);
				push(&ptr,val);
				break;
			case 2:
				element=pop(&ptr);
				printf("element is popped from stack");
				break;
			case 3:
				printf("current stack elements:");
				display(&ptr);
				break;
			case 4:
				exit(0);
			default:
				printf("enter correct option");
		}
	}
}


