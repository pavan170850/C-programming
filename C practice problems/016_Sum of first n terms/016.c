#include <stdio.h>
#include <math.h>
int sumOfSeries(int N) {
	int result=0;
	for (int i=1;i<=N;i++){
	
		result+=pow(i,3);
	}
	return result;
}

int main(){

	int N=7;
	printf("%d ",sumOfSeries(N));
}
	
