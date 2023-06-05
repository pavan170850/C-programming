#include <stdio.h>
#include <math.h>



int Nth_term(int A, int R, int N) {
    int term = (A * pow(R, N-1));
    return term % 1000000007;
}

int main()
	{

	printf("%d ",Nth_term( 2, 3, 4));
	
	}

	
	
	

	
