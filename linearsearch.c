#include <stdio.h>
int linear(int a[],int n, int key);
int main()
{int a[6],n,key,i,pos;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key to search:");
	scanf("%d",&key);
	pos=linear(a,n,key);
	if(pos==-1){
		printf("element is not found");
	}
	else{
		printf("element is found at %d position",pos+1);
	}
}
int linear(int a[],int n,int key)
{int i,k=0;
	for(i=0;i<n;i++){
		if(key==a[i]){
			k=i;
		}
	}
	if(k==0){
		return -1;
	}
	else{
		return k;
	}
}


