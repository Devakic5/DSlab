#include <stdio.h>
int binary(int a[],int n,int key);
int main()
{int a[6],i,n,key,pos;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the key to search");
	scanf("%d",&key);
	pos=binary(a,n,key);
	if(pos==-1){
		printf("element is not found");
		}
	else{
	printf("element is found at %d position",pos);
	}
	return 0;
}
int binary(int a[],int n,int key)
{int low=0,high=n-1,mid;
	while(high>=low){
		mid=(low+high)/2;
		if(key>a[mid]){
			low=mid+1;
		}
		else if(key<a[mid]){
			high=mid-1;
		}
		else{
			return mid;
		}
	}
	return -1;
}


