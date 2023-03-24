#include <stdio.h>

int isValid(long long N)
	{

	//ternary operator= condition?true statement:false statement;
	
	(N%5==0)?printf("YES\n"):printf("NO\n"); 
	}
	
int main()
	{
	isValid(25);
	}
