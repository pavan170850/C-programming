
//Sum of squares of odd numbers up to a given number n


#include  <stdio.h>

int sum_of_square_oddNumbers(int n)
{
	return (n*(2*n-1)*(2*n+1))/3 ;
}

int main()
{
	printf("%d\n ",sum_of_square_oddNumbers(3));
}
	

