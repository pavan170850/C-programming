#include <stdio.h>
#include <math.h>
int  nearestPowerOf2(int N)
{
	 int a =floor( log2(N) );


	if (pow(2, a) == N)
		return N;

	return pow(2, a + 1);
}

int main()
{
    int n = 10;
	printf("%d \n",nearestPowerOf2(n));

	return 0;
}


