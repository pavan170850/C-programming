#include <stdio.h>
#include <math.h>

int maximizeMoney(int N , int K) ;

int maximizeMoney(int N , int K) {

	if (N%2 !=0)
		return ((N/2+1)*K);
	else
		return ((N/2)*K);
	
	
}

int main(){

	printf("%d \n",maximizeMoney( 5,10) );
}
