#include <stdio.h>
void insertion(int a[],int n);
int main()
{int a[5],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	printf("after sorting");
	for(i=0;i<n;i++){
                printf("%d",a[i]);
        }
}
void insertion(int a[],int n)
{int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i-1;j>=0;j--){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else{
				break;
			}

		}
	}
}

