#include <stdio.h>

int maximizeMoney(int N,int K)
{
	return ((N+1)/2)*K;
}


int main(){
	printf("%d\n ",maximizeMoney(5,10));

}


