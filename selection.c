#include <stdio.h>
void selection(int a[],int n);
int main(){
	int a[5],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elelments");
        for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("after sorting");
        for(i=0;i<n;i++){
                printf("%d",a[i]);
        }
}
void selection(int a[],int n)
{int i,j,temp,min;
	for(i=0;i<n-1;i++){
		min=i;
	for(j=i+1;j<n;j++){
		if(a[min]>a[j]){
			min=j;
		}
	temp=a[j];
        a[j]=a[min];
	a[min]=temp;
	}
	}
}


	
