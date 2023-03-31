#include <stdio.h>

int count(int arr[],int n,int x){
	int c=0;
	for (int i=0;i<n;i++){
		if (arr[i]<=x)
			c++;
	//	else
	//		continue;
		}
	return c;
}

int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d\n",count(a,n,3));
}
