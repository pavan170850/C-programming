
//Sum of squares of odd numbers up to a given number n

#include <stdio.h>

int sum_of_square_oddNumbers(int n){

	int r,s,i;
	for (i=1;i<=n;i++)
	{
		r=(2*i-1);
		s+=(r*r);	
	}
	return s;
}

int main(){
	int n=3;
	//printf("enter n:");
	//scanf("%d",&n);
	printf("%d\n",sum_of_square_oddNumbers(n));
}
