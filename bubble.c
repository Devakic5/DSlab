#include <stdio.h>
void bubble(int a[],int n);
int main()
{int a[6],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	printf("after sorting:");
        for (i=0;i<n;i++){
                printf("%d",a[i]);
        }
}	
void bubble(int a[],int n)
{int i,j,temp;
	for (i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
                    
