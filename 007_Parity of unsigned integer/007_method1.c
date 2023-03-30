#include <stdio.h>

int computeParity(int);
int main()
{
	
	computeParity(15);
}

int computeParity(int N)
{
	int r,c=0;
	while (N)
	{
		r=N%2;
		N/=2;
		if (r==1)
			c++;
	}
	(c % 2==0)? printf("even\n"):printf("odd\n");
	

}

