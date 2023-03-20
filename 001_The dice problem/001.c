#include <stdio.h>
int oppositeFaceOfDice(int N)
    {
        int res=7-N;
        printf("%d\n",res);
    }
int main(){
	int N=1;
	
	//int N;
	//printf("Enter N:");
	//scanf("%d",&N);
	
	oppositeFaceOfDice(N);
	return 0;
	}

